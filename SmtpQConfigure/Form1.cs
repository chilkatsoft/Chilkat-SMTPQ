using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace SmtpQConfigure
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private Microsoft.Win32.RegistryKey openSmtpQKey()
        {
            Microsoft.Win32.RegistryKey kSoftware;
            Microsoft.Win32.RegistryKey kChilkat;
            Microsoft.Win32.RegistryKey kSmtpQ;

            kSoftware = Microsoft.Win32.Registry.LocalMachine.OpenSubKey("SOFTWARE", Microsoft.Win32.RegistryKeyPermissionCheck.ReadWriteSubTree);
            if (kSoftware == null)
            {
                MessageBox.Show("Failed to open SOFTWARE registry key.");
                return null;
            }

            kChilkat = kSoftware.OpenSubKey("Chilkat Software, Inc.", Microsoft.Win32.RegistryKeyPermissionCheck.ReadWriteSubTree);
            if (kChilkat == null)
            {
                try
                {
                    kChilkat = kSoftware.CreateSubKey("Chilkat Software, Inc.");
                }
                catch (Exception)
                {

                }
            }
            if (kChilkat == null)
            {
                MessageBox.Show("Failed to open Chilkat Software, Inc. registry key.");
                kSoftware.Close();
                return null;
            }
            kSoftware.Close();


            kSmtpQ = kChilkat.OpenSubKey("SmtpQ", Microsoft.Win32.RegistryKeyPermissionCheck.ReadWriteSubTree);
            if (kSmtpQ == null)
            {
                kSmtpQ = kChilkat.CreateSubKey("SmtpQ");
            }
            if (kSmtpQ == null)
            {
                MessageBox.Show("Failed to open SmtpQ registry key.");
                kChilkat.Close();
                return null;
            }
            kChilkat.Close();

            return kSmtpQ;
        }

        private string getSmtpQSetting(Microsoft.Win32.RegistryKey kSmtpQ,
            string name, string defaultVal)
        {
            string s;
            Object objVal;

            s = null;
            objVal = null;
            objVal = kSmtpQ.GetValue(name);
            if (objVal != null) s = objVal.ToString();
            if (s == null)
            {
                kSmtpQ.SetValue(name, defaultVal, Microsoft.Win32.RegistryValueKind.String);
                objVal = kSmtpQ.GetValue(name);
                if (objVal != null) s = objVal.ToString();
            }
            return s;
        }

        private bool saveSmtpQSetting(Microsoft.Win32.RegistryKey kSmtpQ,
            string name, string val)
        {
            kSmtpQ.SetValue(name, val, Microsoft.Win32.RegistryValueKind.String);
            return true;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            if (IntPtr.Size == 4)
                {
                // 32-bit
                label1.Text = "32-bit SMTPQ Configure";
                }
            else if (IntPtr.Size == 8)
                {
                // 64-bit
                label1.Text = "64-bit SMTPQ Configure";
                }

            Microsoft.Win32.RegistryKey kSmtpQ = openSmtpQKey();
            if (kSmtpQ == null) return;

            string s;

            s = getSmtpQSetting(kSmtpQ, "QueueDir", @"c:\temp\ChilkatSmtpQ\queue");
            if (s != null) txtQueueDir.Text = s;

            s = getSmtpQSetting(kSmtpQ, "SentDir", @"c:\temp\ChilkatSmtpQ\sent");
            if (s != null) txtSentDir.Text = s;

            s = getSmtpQSetting(kSmtpQ, "UndelivDir", @"c:\temp\ChilkatSmtpQ\undeliverable");
            if (s != null) txtUndeliv.Text = s;

            s = getSmtpQSetting(kSmtpQ, "LogDir", @"c:\temp\ChilkatSmtpQ\log");
            if (s != null) txtLogDir.Text = s;

            s = getSmtpQSetting(kSmtpQ, "MaxThreads", @"5");
            if (s != null) txtMaxThreads.Text = s;

            s = getSmtpQSetting(kSmtpQ, "MaxRetries", @"5");
            if (s != null) txtMaxRetries.Text = s;

            s = getSmtpQSetting(kSmtpQ, "SaveSent", @"no");
            if (s != null)
            {
                if (s.Equals("yes")) chkDelAfterSend.Checked = false;
                else chkDelAfterSend.Checked = true;
            }
            s = getSmtpQSetting(kSmtpQ, "LogErrorsOnly", @"no");
            if (s != null)
            {
                if (s.Equals("yes")) checkBox1.Checked = true;
                else checkBox1.Checked = false;
            }
            
            kSmtpQ.Close();

        }

        // Apply changes.
        private void button1_Click(object sender, EventArgs e)
        {
            Microsoft.Win32.RegistryKey kSmtpQ = openSmtpQKey();
            if (kSmtpQ == null)
            {
                return;
            }

            saveSmtpQSetting(kSmtpQ, "QueueDir", txtQueueDir.Text);
            saveSmtpQSetting(kSmtpQ, "SentDir", txtSentDir.Text);
            saveSmtpQSetting(kSmtpQ, "UndelivDir", txtUndeliv.Text);
            saveSmtpQSetting(kSmtpQ, "LogDir", txtLogDir.Text);
            saveSmtpQSetting(kSmtpQ, "MaxThreads", txtMaxThreads.Text);
            saveSmtpQSetting(kSmtpQ, "MaxRetries", txtMaxRetries.Text);
            if (chkDelAfterSend.Checked) saveSmtpQSetting(kSmtpQ, "SaveSent", "no");
            else saveSmtpQSetting(kSmtpQ, "SaveSent", "yes");
            if (checkBox1.Checked) saveSmtpQSetting(kSmtpQ, "LogErrorsOnly", "yes");
            else saveSmtpQSetting(kSmtpQ, "LogErrorsOnly", "no"); 

            kSmtpQ.Close();

            MessageBox.Show("Changes Applied.");
        }
    }
}
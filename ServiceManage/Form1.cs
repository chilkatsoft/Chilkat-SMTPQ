using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ServiceManage
    {
    public partial class Form1 : Form
	{
	public Form1()
	    {
	    InitializeComponent();
	    }

	private void btnBrowse_Click(object sender, EventArgs e)
	    {
	    if (openFileDialog1.ShowDialog() == DialogResult.OK)
		{
		txtExePath.Text = openFileDialog1.FileName;
		}

	    }

	private void Form1_Load(object sender, EventArgs e)
	    {

	    }

        //Installs and starts the service
        //ServiceInstaller.InstallAndStart("MyServiceName", "MyServiceDisplayName", "C:\PathToServiceFile.exe");

        ////Removes the service
        //ServiceInstaller.Uninstall("MyServiceName");

        ////Checks the status of the service
        //ServiceInstaller.GetServiceStatus("MyServiceName");

        ////Starts the service
        //ServiceInstaller.StartService("MyServiceName");

        ////Stops the service
        //ServiceInstaller.StopService("MyServiceName");

        ////Check if service is installed
        //ServiceInstaller.ServiceIsInstalled("MyServiceName");

        //Installs and starts the service
        private void button1_Click(object sender, EventArgs e)
            {
            string path = txtExePath.Text.Trim();
            if (path.Length == 0)
                {
                MessageBox.Show("Please provide a path to the service exe.");
                return;
                }
            if (!System.IO.File.Exists(path))
                {
                MessageBox.Show("The exe at the path does not exist.");
                return;
                }
            ServiceState st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st != ServiceState.NotFound)
                {
                MessageBox.Show("service is already installed.  Uninstall first before re-installing.");
                return;
                }

            ServiceInstaller.InstallAndStart(txtServiceName.Text, txtServiceName.Text, path);
            showServiceStatus();
            }

        private void button2_Click(object sender, EventArgs e)
            {
            ServiceState st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st == ServiceState.NotFound)
                {
                MessageBox.Show("Service is already not installed.");
                return;
                }

            ServiceInstaller.Uninstall(txtServiceName.Text);
            st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st == ServiceState.NotFound)
                {
                MessageBox.Show("Service is uninstalled.");
                return;
                }

            showServiceStatus();
            }

        private void button3_Click(object sender, EventArgs e)
            {
            ServiceState st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st == ServiceState.NotFound)
                {
                MessageBox.Show("service is not yet installed.");
                return;
                }
            if (st == ServiceState.Starting)
                {
                MessageBox.Show("service is already running.");
                return;
                }

            ServiceInstaller.StartService(txtServiceName.Text);
            showServiceStatus();
            }

        private void button4_Click(object sender, EventArgs e)
            {
            ServiceState st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st == ServiceState.NotFound)
                {
                MessageBox.Show("service is not yet installed.");
                return;
                }
            if (st == ServiceState.Stop)
                {
                MessageBox.Show("service is already stopped.");
                return;
                }
            ServiceInstaller.StopService(txtServiceName.Text);
            showServiceStatus();
            }

        private void button5_Click(object sender, EventArgs e)
            {
            bool bIsInstalled = ServiceInstaller.ServiceIsInstalled(txtServiceName.Text);
            MessageBox.Show(bIsInstalled ? "Yes, " + txtServiceName.Text + " is installed" : "No, " + txtServiceName.Text + " is NOT installed");
            }

        private void showServiceStatus()
            {
            ServiceState st = ServiceInstaller.GetServiceStatus(txtServiceName.Text);
            if (st == ServiceState.Unknown) MessageBox.Show("Unknown");
            else if (st == ServiceState.NotFound) MessageBox.Show("Not Installed");
            else if (st == ServiceState.Stop) MessageBox.Show("Stopped");
            else if (st == ServiceState.Run) MessageBox.Show("Start pending");
            else if (st == ServiceState.Stopping) MessageBox.Show("Stop pending");
            else if (st == ServiceState.Starting) MessageBox.Show("Running");
            }

        private void button6_Click(object sender, EventArgs e)
            {
            showServiceStatus();
            }


	}
    }

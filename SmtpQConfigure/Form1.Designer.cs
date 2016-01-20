namespace SmtpQConfigure
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.txtQueueDir = new System.Windows.Forms.TextBox();
            this.txtUndeliv = new System.Windows.Forms.TextBox();
            this.txtSentDir = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.txtLogDir = new System.Windows.Forms.TextBox();
            this.chkDelAfterSend = new System.Windows.Forms.CheckBox();
            this.label6 = new System.Windows.Forms.Label();
            this.txtMaxThreads = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.txtMaxRetries = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(83, 19);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(235, 31);
            this.label1.TabIndex = 0;
            this.label1.Text = "SMTPQ Configure";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(19, 73);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(84, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Queue Directory";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(19, 122);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(109, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Undelivered Directory";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(19, 170);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(74, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "Sent Directory";
            // 
            // txtQueueDir
            // 
            this.txtQueueDir.Location = new System.Drawing.Point(19, 89);
            this.txtQueueDir.Name = "txtQueueDir";
            this.txtQueueDir.Size = new System.Drawing.Size(454, 20);
            this.txtQueueDir.TabIndex = 4;
            // 
            // txtUndeliv
            // 
            this.txtUndeliv.Location = new System.Drawing.Point(19, 138);
            this.txtUndeliv.Name = "txtUndeliv";
            this.txtUndeliv.Size = new System.Drawing.Size(453, 20);
            this.txtUndeliv.TabIndex = 5;
            // 
            // txtSentDir
            // 
            this.txtSentDir.Location = new System.Drawing.Point(19, 186);
            this.txtSentDir.Name = "txtSentDir";
            this.txtSentDir.Size = new System.Drawing.Size(450, 20);
            this.txtSentDir.TabIndex = 6;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(19, 219);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(70, 13);
            this.label5.TabIndex = 7;
            this.label5.Text = "Log Directory";
            // 
            // txtLogDir
            // 
            this.txtLogDir.Location = new System.Drawing.Point(19, 235);
            this.txtLogDir.Name = "txtLogDir";
            this.txtLogDir.Size = new System.Drawing.Size(448, 20);
            this.txtLogDir.TabIndex = 8;
            // 
            // chkDelAfterSend
            // 
            this.chkDelAfterSend.AutoSize = true;
            this.chkDelAfterSend.Location = new System.Drawing.Point(22, 321);
            this.chkDelAfterSend.Name = "chkDelAfterSend";
            this.chkDelAfterSend.Size = new System.Drawing.Size(110, 17);
            this.chkDelAfterSend.TabIndex = 10;
            this.chkDelAfterSend.Text = "Delete After Send";
            this.chkDelAfterSend.UseVisualStyleBackColor = true;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(19, 269);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(69, 13);
            this.label6.TabIndex = 11;
            this.label6.Text = "Max Threads";
            // 
            // txtMaxThreads
            // 
            this.txtMaxThreads.Location = new System.Drawing.Point(19, 285);
            this.txtMaxThreads.Name = "txtMaxThreads";
            this.txtMaxThreads.Size = new System.Drawing.Size(142, 20);
            this.txtMaxThreads.TabIndex = 12;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(207, 269);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(139, 13);
            this.label7.TabIndex = 13;
            this.label7.Text = "Max Retries per Email (0-10)";
            // 
            // txtMaxRetries
            // 
            this.txtMaxRetries.Location = new System.Drawing.Point(210, 285);
            this.txtMaxRetries.Name = "txtMaxRetries";
            this.txtMaxRetries.Size = new System.Drawing.Size(136, 20);
            this.txtMaxRetries.TabIndex = 14;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(359, 319);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(107, 29);
            this.button1.TabIndex = 15;
            this.button1.Text = "Apply Changes";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(147, 321);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(98, 17);
            this.checkBox1.TabIndex = 16;
            this.checkBox1.Text = "Log Errors Only";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(481, 367);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.txtMaxRetries);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.txtMaxThreads);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.chkDelAfterSend);
            this.Controls.Add(this.txtLogDir);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtSentDir);
            this.Controls.Add(this.txtUndeliv);
            this.Controls.Add(this.txtQueueDir);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "SMTPQ Configure 20-Jan-2016";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtQueueDir;
        private System.Windows.Forms.TextBox txtUndeliv;
        private System.Windows.Forms.TextBox txtSentDir;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtLogDir;
        private System.Windows.Forms.CheckBox chkDelAfterSend;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtMaxThreads;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox txtMaxRetries;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.CheckBox checkBox1;
    }
}


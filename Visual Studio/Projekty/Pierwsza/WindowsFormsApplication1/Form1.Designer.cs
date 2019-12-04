namespace WindowsFormsApplication1
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
            this.tableLayoutPanel1 = new System.Windows.Forms.TableLayoutPanel();
            this.flowLayoutPanel1 = new System.Windows.Forms.FlowLayoutPanel();
            this.PokazB = new System.Windows.Forms.Button();
            this.WyczyscB = new System.Windows.Forms.Button();
            this.KolorB = new System.Windows.Forms.Button();
            this.ZamknijB = new System.Windows.Forms.Button();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.colorDialog1 = new System.Windows.Forms.ColorDialog();
            this.tableLayoutPanel1.SuspendLayout();
            this.flowLayoutPanel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this.tableLayoutPanel1.ColumnCount = 2;
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 17.23447F));
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 82.76553F));
            this.tableLayoutPanel1.Controls.Add(this.flowLayoutPanel1, 1, 2);
            this.tableLayoutPanel1.Controls.Add(this.checkBox1, 0, 2);
            this.tableLayoutPanel1.Controls.Add(this.pictureBox1, 0, 0);
            this.tableLayoutPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tableLayoutPanel1.Location = new System.Drawing.Point(0, 0);
            this.tableLayoutPanel1.Name = "tableLayoutPanel1";
            this.tableLayoutPanel1.RowCount = 2;
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 98.24176F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 1.758242F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 36F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.tableLayoutPanel1.Size = new System.Drawing.Size(806, 492);
            this.tableLayoutPanel1.TabIndex = 0;
            // 
            // flowLayoutPanel1
            // 
            this.flowLayoutPanel1.Controls.Add(this.PokazB);
            this.flowLayoutPanel1.Controls.Add(this.WyczyscB);
            this.flowLayoutPanel1.Controls.Add(this.KolorB);
            this.flowLayoutPanel1.Controls.Add(this.ZamknijB);
            this.flowLayoutPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.flowLayoutPanel1.FlowDirection = System.Windows.Forms.FlowDirection.RightToLeft;
            this.flowLayoutPanel1.Location = new System.Drawing.Point(141, 458);
            this.flowLayoutPanel1.Name = "flowLayoutPanel1";
            this.flowLayoutPanel1.Size = new System.Drawing.Size(662, 31);
            this.flowLayoutPanel1.TabIndex = 2;
            // 
            // PokazB
            // 
            this.PokazB.AutoSize = true;
            this.PokazB.Location = new System.Drawing.Point(583, 3);
            this.PokazB.Name = "PokazB";
            this.PokazB.Size = new System.Drawing.Size(76, 23);
            this.PokazB.TabIndex = 0;
            this.PokazB.Text = "Pokaż obraz";
            this.PokazB.UseVisualStyleBackColor = true;
            this.PokazB.Click += new System.EventHandler(this.PokazB_Click);
            // 
            // WyczyscB
            // 
            this.WyczyscB.AutoSize = true;
            this.WyczyscB.Location = new System.Drawing.Point(488, 3);
            this.WyczyscB.Name = "WyczyscB";
            this.WyczyscB.Size = new System.Drawing.Size(89, 23);
            this.WyczyscB.TabIndex = 1;
            this.WyczyscB.Text = "Wyczyść obraz";
            this.WyczyscB.UseVisualStyleBackColor = true;
            this.WyczyscB.Click += new System.EventHandler(this.WyczyscB_Click);
            // 
            // KolorB
            // 
            this.KolorB.AutoSize = true;
            this.KolorB.Location = new System.Drawing.Point(407, 3);
            this.KolorB.Name = "KolorB";
            this.KolorB.Size = new System.Drawing.Size(75, 23);
            this.KolorB.TabIndex = 2;
            this.KolorB.Text = "kolor tła";
            this.KolorB.UseVisualStyleBackColor = true;
            this.KolorB.Click += new System.EventHandler(this.KolorB_Click);
            // 
            // ZamknijB
            // 
            this.ZamknijB.AutoSize = true;
            this.ZamknijB.Location = new System.Drawing.Point(326, 3);
            this.ZamknijB.Name = "ZamknijB";
            this.ZamknijB.Size = new System.Drawing.Size(75, 23);
            this.ZamknijB.TabIndex = 3;
            this.ZamknijB.Text = "Zamknij";
            this.ZamknijB.UseVisualStyleBackColor = true;
            this.ZamknijB.Click += new System.EventHandler(this.ZamknijB_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(3, 458);
            this.checkBox1.MinimumSize = new System.Drawing.Size(0, 17);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(76, 17);
            this.checkBox1.TabIndex = 1;
            this.checkBox1.Text = "Przyciagnij";
            this.checkBox1.UseVisualStyleBackColor = true;
            this.checkBox1.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // pictureBox1
            // 
            this.pictureBox1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.tableLayoutPanel1.SetColumnSpan(this.pictureBox1, 2);
            this.pictureBox1.Location = new System.Drawing.Point(3, 3);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(797, 441);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            this.openFileDialog1.Filter = "JPEG Files (*.jpg)|*.jpg|PNG Files (*.png)|*.png|BMP Files (*.bmp)|*.bmp|All file" +
    "s (*.*)|*.*";
            this.openFileDialog1.Title = "Wybierz plik obrazu";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ClientSize = new System.Drawing.Size(806, 492);
            this.Controls.Add(this.tableLayoutPanel1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.tableLayoutPanel1.ResumeLayout(false);
            this.tableLayoutPanel1.PerformLayout();
            this.flowLayoutPanel1.ResumeLayout(false);
            this.flowLayoutPanel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.FlowLayoutPanel flowLayoutPanel1;
        private System.Windows.Forms.Button PokazB;
        private System.Windows.Forms.Button WyczyscB;
        private System.Windows.Forms.Button KolorB;
        private System.Windows.Forms.Button ZamknijB;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.ColorDialog colorDialog1;
    }
}


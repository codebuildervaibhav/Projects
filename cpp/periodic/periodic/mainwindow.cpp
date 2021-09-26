#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1900,950);
    ui->one->setAlignment(Qt::AlignCenter);
    ui->two->setAlignment(Qt::AlignCenter);
    ui->three->setAlignment(Qt::AlignCenter);
    ui->four->setAlignment(Qt::AlignCenter);
    ui->five->setAlignment(Qt::AlignCenter);
    ui->six->setAlignment(Qt::AlignCenter);
    ui->seven->setAlignment(Qt::AlignCenter);
    ui->eight->setAlignment(Qt::AlignCenter);
    ui->nine->setAlignment(Qt::AlignCenter);
    ui->ten->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
     ui->name->setAlignment(Qt::AlignCenter);
      ui->number->setAlignment(Qt::AlignCenter);
       ui->electronic->setAlignment(Qt::AlignCenter);
        ui->group->setAlignment(Qt::AlignCenter);
         ui->period->setAlignment(Qt::AlignCenter);
          ui->radius->setAlignment(Qt::AlignCenter);
           ui->weight->setAlignment(Qt::AlignCenter);
            ui->melting->setAlignment(Qt::AlignCenter);
             ui->boiling->setAlignment(Qt::AlignCenter);
              ui->block->setAlignment(Qt::AlignCenter);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("c:/sqlite/periodic.db");
    if(!mydb.open())
        ui->label_2->setText("Database failed connection");
    else
        ui->label_2->setText("Database connected...!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fun(int val){
    ui->name->setText("");
    ui->number->setText("");
    ui->electronic->setText("");
    ui->group->setText("");
    ui->period->setText("");
    ui->block->setText("");
    ui->weight->setText("");
    ui->radius->setText("");
    ui->melting->setText("");
    ui->boiling->setText("");
    QString name=" ",number=" ",electronic=" ",group=" ",period=" ",block=" ",weight=" ",radius=" ",melting=" ",boiling=" ";
    int atomic = val;
    QString atomicNumber = QString::number(atomic);
    QSqlQuery qry;
    if(!mydb.isOpen()){
        qDebug()<<"Database failed...!";
        return;
    }

    if(qry.exec("select * from sheet1 where atomicNumber = '"+atomicNumber+"'")){
        int count =0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            qry.first();
                     name = qry.value(0).toString();
                     number = qry.value(1).toString();
                     electronic = qry.value(2).toString();
                     group = qry.value(3).toString();
                     period = qry.value(4).toString();
                     block= qry.value(5).toString();
                     weight= qry.value(6).toString();
                     radius= qry.value(7).toString();
                     melting= qry.value(8).toString();
                     boiling= qry.value(9).toString();

            ui->name->setText(name);
            ui->number->setText(number);
            ui->electronic->setText(electronic);
            ui->group->setText(group);
            ui->period->setText(period);
            ui->block->setText(block);
            ui->weight->setText(weight);
            if(radius=="0"){
                ui->radius->setText("Not Applicable");
            }
            else{
            ui->radius->setText(radius+" pm");
            }
            if(melting=="0"){
                ui->melting->setText("Not applicable");
            }
            else{
            ui->melting->setText(melting+" K");
            }
            if(boiling=="0"){
                ui->boiling->setText("Not applicable");
            }
            else{
            ui->boiling->setText(boiling+" K");
            }
            ui->label_2->setText("Fetched data sucessfully...!");
        }
        if(count<1){
            ui->label_2->setText("Data didn,t found..!");
        }
    }

}
void MainWindow::on_hydrogen_clicked()
{
    fun(1);
}


void MainWindow::on_he_clicked()
{
    fun(2);
}


void MainWindow::on_li_clicked()
{
    fun(3);
}


void MainWindow::on_be_clicked()
{
    fun(4);
}


void MainWindow::on_boron_clicked()
{
    fun(5);
}


void MainWindow::on_carbon_clicked()
{
    fun(6);
}


void MainWindow::on_nitrogen_clicked()
{
fun(7);
}


void MainWindow::on_oxygen_clicked()
{
    fun(8);
}


void MainWindow::on_fluorine_clicked()
{
    fun(9);
}


void MainWindow::on_ne_clicked()
{
    fun(10);
}


void MainWindow::on_na_clicked()
{
    fun(11);
}


void MainWindow::on_mg_clicked()
{
    fun(12);
}


void MainWindow::on_al_clicked()
{
    fun(13);
}


void MainWindow::on_si_clicked()
{
    fun(14);
}


void MainWindow::on_phosphorus_clicked()
{
    fun(15);
}


void MainWindow::on_sulfer_clicked()
{
    fun(16);
}


void MainWindow::on_cl_clicked()
{
    fun(17);
}


void MainWindow::on_ar_clicked()
{
    fun(18);
}


void MainWindow::on_potassium_clicked()
{
    fun(19);
}


void MainWindow::on_ca_clicked()
{
    fun(20);
}


void MainWindow::on_sc_clicked()
{
    fun(21);
}


void MainWindow::on_ti_clicked()
{
    fun(22);
}


void MainWindow::on_v_clicked()
{
    fun(23);
}


void MainWindow::on_cr_clicked()
{
    fun(24);
}


void MainWindow::on_mn_clicked()
{
    fun(25);
}


void MainWindow::on_fe_clicked()
{
    fun(26);
}


void MainWindow::on_co_clicked()
{
    fun(27);
}


void MainWindow::on_ni_clicked()
{
    fun(28);
}


void MainWindow::on_cu_clicked()
{
    fun(29);
}


void MainWindow::on_zn_clicked()
{
    fun(30);
}


void MainWindow::on_ga_clicked()
{
    fun(31);
}


void MainWindow::on_ge_clicked()
{
    fun(32);
}


void MainWindow::on_as_clicked()
{
    fun(33);
}


void MainWindow::on_se_clicked()
{
    fun(34);
}


void MainWindow::on_br_clicked()
{
    fun(35);
}


void MainWindow::on_kr_clicked()
{
    fun(36);
}


void MainWindow::on_rb_clicked()
{
    fun(37);
}


void MainWindow::on_sr_clicked()
{
    fun(38);
}


void MainWindow::on_y_clicked()
{
    fun(39);
}


void MainWindow::on_zr_clicked()
{
    fun(40);
}


void MainWindow::on_nb_clicked()
{
     fun(41);
}


void MainWindow::on_mo_clicked()
{
     fun(42);
}


void MainWindow::on_tc_clicked()
{
     fun(43);
}


void MainWindow::on_ru_clicked()
{
     fun(44);
}


void MainWindow::on_rh_clicked()
{
     fun(45);
}


void MainWindow::on_pd_clicked()
{
     fun(46);
}


void MainWindow::on_ag_clicked()
{
     fun(47);
}


void MainWindow::on_cd_clicked()
{
     fun(48);
}


void MainWindow::on_ln_clicked()
{
     fun(49);
}


void MainWindow::on_sn_clicked()
{
     fun(50);
}


void MainWindow::on_sb_clicked()
{
    fun(51);
}


void MainWindow::on_te_clicked()
{
    fun(52);
}


void MainWindow::on_l_clicked()
{
    fun(53);
}


void MainWindow::on_xe_clicked()
{
    fun(54);
}


void MainWindow::on_cs_clicked()
{
    fun(55);
}


void MainWindow::on_ba_clicked()
{
    fun(56);
}


void MainWindow::on_la_clicked()
{
    fun(57);
}


void MainWindow::on_ce_clicked()
{
    fun(58);
}


void MainWindow::on_pr_clicked()
{
    fun(59);
}


void MainWindow::on_nd_clicked()
{
    fun(60);
}


void MainWindow::on_pm_clicked()
{
    fun(61);
}


void MainWindow::on_sm_clicked()
{
    fun(62);
}


void MainWindow::on_eu_clicked()
{
    fun(63);
}


void MainWindow::on_gd_clicked()
{
    fun(64);
}


void MainWindow::on_tb_clicked()
{
    fun(65);
}


void MainWindow::on_dy_clicked()
{
    fun(66);
}


void MainWindow::on_ho_clicked()
{
    fun(67);
}


void MainWindow::on_er_clicked()
{
    fun(68);
}


void MainWindow::on_tm_clicked()
{
    fun(69);
}


void MainWindow::on_yb_clicked()
{
    fun(70);
}


void MainWindow::on_lu_clicked()
{
    fun(71);
}


void MainWindow::on_hf_clicked()
{
    fun(72);
}


void MainWindow::on_ta_clicked()
{
    fun(73);
}


void MainWindow::on_w_clicked()
{
    fun(74);
}


void MainWindow::on_re_clicked()
{
    fun(75);
}


void MainWindow::on_os_clicked()
{
    fun(76);
}


void MainWindow::on_Ir_clicked()
{
    fun(77);
}


void MainWindow::on_pt_clicked()
{
    fun(78);
}


void MainWindow::on_au_clicked()
{
    fun(79);
}


void MainWindow::on_hg_clicked()
{
    fun(80);
}


void MainWindow::on_tl_clicked()
{
    fun(81);
}


void MainWindow::on_pb_clicked()
{
    fun(82);
}


void MainWindow::on_bi_clicked()
{
    fun(83);
}


void MainWindow::on_po_clicked()
{
    fun(84);
}


void MainWindow::on_at_clicked()
{
    fun(85);
}


void MainWindow::on_rn_clicked()
{
    fun(86);
}


void MainWindow::on_fr_clicked()
{
    fun(87);
}


void MainWindow::on_ra_clicked()
{
    fun(88);
}


void MainWindow::on_ac_clicked()
{
    fun(89);
}


void MainWindow::on_th_clicked()
{
    fun(90);
}


void MainWindow::on_pa_clicked()
{
     fun(91);
}


void MainWindow::on_u_clicked()
{
     fun(92);
}


void MainWindow::on_np_clicked()
{
     fun(93);
}


void MainWindow::on_pu_clicked()
{
     fun(94);
}


void MainWindow::on_am_clicked()
{
     fun(95);
}


void MainWindow::on_cm_clicked()
{
     fun(96);
}


void MainWindow::on_bk_clicked()
{
     fun(97);
}


void MainWindow::on_cf_clicked()
{
     fun(98);
}


void MainWindow::on_es_clicked()
{
     fun(99);
}


void MainWindow::on_fm_clicked()
{
     fun(100);
}


void MainWindow::on_md_clicked()
{
    fun(101);
}


void MainWindow::on_no_clicked()
{
    fun(102);
}


void MainWindow::on_Lr_clicked()
{
    fun(103);
}


void MainWindow::on_rf_clicked()
{
    fun(104);
}


void MainWindow::on_db_clicked()
{
    fun(105);
}


void MainWindow::on_sg_clicked()
{
    fun(106);
}


void MainWindow::on_bh_clicked()
{
    fun(107);
}


void MainWindow::on_hs_clicked()
{
    fun(108);
}


void MainWindow::on_mt_clicked()
{
    fun(109);
}


void MainWindow::on_ds_clicked()
{
    fun(110);
}


void MainWindow::on_rg_clicked()
{
    fun(111);
}


void MainWindow::on_cn_clicked()
{
    fun(112);
}


void MainWindow::on_nh_clicked()
{
    fun(113);
}


void MainWindow::on_fl_clicked()
{
    fun(114);
}


void MainWindow::on_mc_clicked()
{
    fun(115);
}


void MainWindow::on_lv_clicked()
{
    fun(116);
}


void MainWindow::on_ts_clicked()
{
    fun(117);
}


void MainWindow::on_og_clicked()
{
    fun(118);
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void fun(int val);
private slots:

    void on_hydrogen_clicked();

    void on_he_clicked();

    void on_li_clicked();

    void on_be_clicked();

    void on_boron_clicked();

    void on_carbon_clicked();

    void on_nitrogen_clicked();

    void on_oxygen_clicked();

    void on_fluorine_clicked();

    void on_ne_clicked();

    void on_na_clicked();

    void on_mg_clicked();

    void on_al_clicked();

    void on_si_clicked();

    void on_phosphorus_clicked();

    void on_sulfer_clicked();

    void on_cl_clicked();

    void on_ar_clicked();

    void on_potassium_clicked();

    void on_ca_clicked();

    void on_sc_clicked();

    void on_ti_clicked();

    void on_v_clicked();

    void on_cr_clicked();

    void on_mn_clicked();

    void on_fe_clicked();

    void on_co_clicked();

    void on_ni_clicked();

    void on_cu_clicked();

    void on_zn_clicked();

    void on_ga_clicked();

    void on_ge_clicked();

    void on_as_clicked();

    void on_se_clicked();

    void on_br_clicked();

    void on_kr_clicked();

    void on_rb_clicked();

    void on_sr_clicked();

    void on_y_clicked();

    void on_zr_clicked();

    void on_nb_clicked();

    void on_mo_clicked();

    void on_tc_clicked();

    void on_ru_clicked();

    void on_rh_clicked();

    void on_pd_clicked();

    void on_ag_clicked();

    void on_cd_clicked();

    void on_ln_clicked();

    void on_sn_clicked();

    void on_sb_clicked();

    void on_te_clicked();

    void on_l_clicked();

    void on_xe_clicked();

    void on_cs_clicked();

    void on_ba_clicked();

    void on_la_clicked();

    void on_ce_clicked();

    void on_pr_clicked();

    void on_nd_clicked();

    void on_pm_clicked();

    void on_sm_clicked();

    void on_eu_clicked();

    void on_gd_clicked();

    void on_tb_clicked();

    void on_dy_clicked();

    void on_ho_clicked();

    void on_er_clicked();

    void on_tm_clicked();

    void on_yb_clicked();

    void on_lu_clicked();

    void on_hf_clicked();

    void on_ta_clicked();

    void on_w_clicked();

    void on_re_clicked();

    void on_os_clicked();

    void on_Ir_clicked();

    void on_pt_clicked();

    void on_au_clicked();

    void on_hg_clicked();

    void on_tl_clicked();

    void on_pb_clicked();

    void on_bi_clicked();

    void on_po_clicked();

    void on_at_clicked();

    void on_rn_clicked();

    void on_fr_clicked();

    void on_ra_clicked();

    void on_ac_clicked();

    void on_th_clicked();

    void on_pa_clicked();

    void on_u_clicked();

    void on_np_clicked();

    void on_pu_clicked();

    void on_am_clicked();

    void on_cm_clicked();

    void on_bk_clicked();

    void on_cf_clicked();

    void on_es_clicked();

    void on_fm_clicked();

    void on_md_clicked();

    void on_no_clicked();

    void on_Lr_clicked();

    void on_rf_clicked();

    void on_db_clicked();

    void on_sg_clicked();

    void on_bh_clicked();

    void on_hs_clicked();

    void on_mt_clicked();

    void on_ds_clicked();

    void on_rg_clicked();

    void on_cn_clicked();

    void on_nh_clicked();

    void on_fl_clicked();

    void on_mc_clicked();

    void on_lv_clicked();

    void on_ts_clicked();

    void on_og_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase mydb;
};
#endif // MAINWINDOW_H

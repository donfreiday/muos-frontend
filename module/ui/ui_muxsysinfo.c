#include "ui_muxsysinfo.h"

lv_obj_t *ui_pnlVersion;
lv_obj_t *ui_pnlDevice;
lv_obj_t *ui_pnlKernel;
lv_obj_t *ui_pnlUptime;
lv_obj_t *ui_pnlCPU;
lv_obj_t *ui_pnlSpeed;
lv_obj_t *ui_pnlGovernor;
lv_obj_t *ui_pnlMemory;
lv_obj_t *ui_pnlTemp;
lv_obj_t *ui_pnlService;
lv_obj_t *ui_pnlBatteryCap;
lv_obj_t *ui_pnlVoltage;

lv_obj_t *ui_lblVersion;
lv_obj_t *ui_lblDevice;
lv_obj_t *ui_lblKernel;
lv_obj_t *ui_lblUptime;
lv_obj_t *ui_lblCPU;
lv_obj_t *ui_lblSpeed;
lv_obj_t *ui_lblGovernor;
lv_obj_t *ui_lblMemory;
lv_obj_t *ui_lblTemp;
lv_obj_t *ui_lblService;
lv_obj_t *ui_lblBatteryCap;
lv_obj_t *ui_lblVoltage;

lv_obj_t *ui_icoVersion;
lv_obj_t *ui_icoDevice;
lv_obj_t *ui_icoKernel;
lv_obj_t *ui_icoUptime;
lv_obj_t *ui_icoCPU;
lv_obj_t *ui_icoSpeed;
lv_obj_t *ui_icoGovernor;
lv_obj_t *ui_icoMemory;
lv_obj_t *ui_icoTemp;
lv_obj_t *ui_icoService;
lv_obj_t *ui_icoBatteryCap;
lv_obj_t *ui_icoVoltage;

lv_obj_t *ui_lblVersionValue;
lv_obj_t *ui_lblDeviceValue;
lv_obj_t *ui_lblKernelValue;
lv_obj_t *ui_lblUptimeValue;
lv_obj_t *ui_lblCPUValue;
lv_obj_t *ui_lblSpeedValue;
lv_obj_t *ui_lblGovernorValue;
lv_obj_t *ui_lblMemoryValue;
lv_obj_t *ui_lblTempValue;
lv_obj_t *ui_lblServiceValue;
lv_obj_t *ui_lblBatteryCapValue;
lv_obj_t *ui_lblVoltageValue;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_pnlVersion = lv_obj_create(ui_pnlContent);
    ui_pnlDevice = lv_obj_create(ui_pnlContent);
    ui_pnlKernel = lv_obj_create(ui_pnlContent);
    ui_pnlUptime = lv_obj_create(ui_pnlContent);
    ui_pnlCPU = lv_obj_create(ui_pnlContent);
    ui_pnlSpeed = lv_obj_create(ui_pnlContent);
    ui_pnlGovernor = lv_obj_create(ui_pnlContent);
    ui_pnlMemory = lv_obj_create(ui_pnlContent);
    ui_pnlTemp = lv_obj_create(ui_pnlContent);
    ui_pnlService = lv_obj_create(ui_pnlContent);
    ui_pnlBatteryCap = lv_obj_create(ui_pnlContent);
    ui_pnlVoltage = lv_obj_create(ui_pnlContent);

    ui_lblVersion = lv_label_create(ui_pnlVersion);
    ui_lblDevice = lv_label_create(ui_pnlDevice);
    ui_lblKernel = lv_label_create(ui_pnlKernel);
    ui_lblUptime = lv_label_create(ui_pnlUptime);
    ui_lblCPU = lv_label_create(ui_pnlCPU);
    ui_lblSpeed = lv_label_create(ui_pnlSpeed);
    ui_lblGovernor = lv_label_create(ui_pnlGovernor);
    ui_lblMemory = lv_label_create(ui_pnlMemory);
    ui_lblTemp = lv_label_create(ui_pnlTemp);
    ui_lblService = lv_label_create(ui_pnlService);
    ui_lblBatteryCap = lv_label_create(ui_pnlBatteryCap);
    ui_lblVoltage = lv_label_create(ui_pnlVoltage);

    ui_icoVersion = lv_img_create(ui_pnlVersion);
    ui_icoDevice = lv_img_create(ui_pnlDevice);
    ui_icoKernel = lv_img_create(ui_pnlKernel);
    ui_icoUptime = lv_img_create(ui_pnlUptime);
    ui_icoCPU = lv_img_create(ui_pnlCPU);
    ui_icoSpeed = lv_img_create(ui_pnlSpeed);
    ui_icoGovernor = lv_img_create(ui_pnlGovernor);
    ui_icoMemory = lv_img_create(ui_pnlMemory);
    ui_icoTemp = lv_img_create(ui_pnlTemp);
    ui_icoService = lv_img_create(ui_pnlService);
    ui_icoBatteryCap = lv_img_create(ui_pnlBatteryCap);
    ui_icoVoltage = lv_img_create(ui_pnlVoltage);

    ui_lblVersionValue = lv_label_create(ui_pnlVersion);
    ui_lblDeviceValue = lv_label_create(ui_pnlDevice);
    ui_lblKernelValue = lv_label_create(ui_pnlKernel);
    ui_lblUptimeValue = lv_label_create(ui_pnlUptime);
    ui_lblCPUValue = lv_label_create(ui_pnlCPU);
    ui_lblSpeedValue = lv_label_create(ui_pnlSpeed);
    ui_lblGovernorValue = lv_label_create(ui_pnlGovernor);
    ui_lblMemoryValue = lv_label_create(ui_pnlMemory);
    ui_lblTempValue = lv_label_create(ui_pnlTemp);
    ui_lblServiceValue = lv_label_create(ui_pnlService);
    ui_lblBatteryCapValue = lv_label_create(ui_pnlBatteryCap);
    ui_lblVoltageValue = lv_label_create(ui_pnlVoltage);
}
#include "ui.h"

void ui_screen_init(lv_obj_t *ui_pnlContent);

lv_obj_t *ui_pnlCore;
lv_obj_t *ui_pnlGovernor;
lv_obj_t *ui_lblCore;
lv_obj_t *ui_lblGovernor;
lv_obj_t *ui_icoCore;
lv_obj_t *ui_icoGovernor;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_screen_init(ui_pnlContent);
}
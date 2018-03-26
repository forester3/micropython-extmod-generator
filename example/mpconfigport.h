extern const struct _mp_obj_module_t example;

#define MICROPY_PORT_BUILTIN_MODULES \
    { MP_ROM_QSTR(MP_QSTR_example), MP_ROM_PTR(&mp_module_example) }


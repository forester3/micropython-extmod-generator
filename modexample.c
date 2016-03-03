/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Pavol Rusnak
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/binary.h"

STATIC mp_obj_t mod_example_func_a(void) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_0(mod_example_func_a_obj, mod_example_func_a);

STATIC mp_obj_t mod_example_func_b(mp_obj_t arg1) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_1(mod_example_func_b_obj, mod_example_func_b);

STATIC mp_obj_t mod_example_func_c(mp_obj_t arg1, mp_obj_t arg2) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(mod_example_func_c_obj, mod_example_func_c);

STATIC mp_obj_t mod_example_func_d(mp_obj_t arg1, mp_obj_t arg2, mp_obj_t arg3) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_3(mod_example_func_d_obj, mod_example_func_d);

STATIC mp_obj_t mod_example_func_e(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_func_e_obj, 4, 4, mod_example_func_e);

STATIC mp_obj_t mod_example_func_f(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_func_f_obj, 5, 5, mod_example_func_f);

STATIC mp_obj_t mod_example_func_g(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_func_g_obj, 2, 4, mod_example_func_g);

STATIC mp_obj_t mod_example_func_h(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR(mod_example_func_h_obj, 3, mod_example_func_h);

STATIC mp_obj_t mod_example_func_i(size_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_KW(mod_example_func_i_obj, 2, mod_example_func_i);

STATIC mp_obj_t mod_example_Klass_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}

STATIC mp_obj_t mod_example_Klass_func_a(mp_obj_t self) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_1(mod_example_Klass_func_a_obj, mod_example_Klass_func_a);

STATIC mp_obj_t mod_example_Klass_func_b(mp_obj_t self, mp_obj_t arg1) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(mod_example_Klass_func_b_obj, mod_example_Klass_func_b);

STATIC mp_obj_t mod_example_Klass_func_c(mp_obj_t self, mp_obj_t arg1, mp_obj_t arg2) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_3(mod_example_Klass_func_c_obj, mod_example_Klass_func_c);

STATIC mp_obj_t mod_example_Klass_func_d(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_Klass_func_d_obj, 4, 4, mod_example_Klass_func_d);

STATIC mp_obj_t mod_example_Klass_func_e(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_Klass_func_e_obj, 5, 5, mod_example_Klass_func_e);

STATIC mp_obj_t mod_example_Klass_func_f(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_Klass_func_f_obj, 6, 6, mod_example_Klass_func_f);

STATIC mp_obj_t mod_example_Klass_func_g(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_example_Klass_func_g_obj, 3, 5, mod_example_Klass_func_g);

STATIC mp_obj_t mod_example_Klass_func_h(size_t n_args, const mp_obj_t *args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR(mod_example_Klass_func_h_obj, 4, mod_example_Klass_func_h);

STATIC mp_obj_t mod_example_Klass_func_i(size_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    // TODO
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_KW(mod_example_Klass_func_i_obj, 3, mod_example_Klass_func_i);

STATIC const mp_rom_map_elem_t mod_example_Klass_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_func_a), MP_ROM_PTR(&mod_example_Klass_func_a_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_b), MP_ROM_PTR(&mod_example_Klass_func_b_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_c), MP_ROM_PTR(&mod_example_Klass_func_c_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_d), MP_ROM_PTR(&mod_example_Klass_func_d_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_e), MP_ROM_PTR(&mod_example_Klass_func_e_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_f), MP_ROM_PTR(&mod_example_Klass_func_f_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_g), MP_ROM_PTR(&mod_example_Klass_func_g_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_h), MP_ROM_PTR(&mod_example_Klass_func_h_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_i), MP_ROM_PTR(&mod_example_Klass_func_i_obj) },
};
STATIC MP_DEFINE_CONST_DICT(mod_example_Klass_locals_dict, mod_example_Klass_locals_dict_table);

STATIC const mp_obj_type_t mod_example_Klass_type = {
    { &mp_type_type },
    .name = MP_QSTR_Klass,
    .make_new = mod_example_Klass_make_new,
    .locals_dict = (void*)&mod_example_Klass_locals_dict,
};

STATIC const mp_rom_map_elem_t mp_module_example_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_example) },
    { MP_ROM_QSTR(MP_QSTR_func_a), MP_ROM_PTR(&mod_example_func_a_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_b), MP_ROM_PTR(&mod_example_func_b_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_c), MP_ROM_PTR(&mod_example_func_c_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_d), MP_ROM_PTR(&mod_example_func_d_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_e), MP_ROM_PTR(&mod_example_func_e_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_f), MP_ROM_PTR(&mod_example_func_f_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_g), MP_ROM_PTR(&mod_example_func_g_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_h), MP_ROM_PTR(&mod_example_func_h_obj) },
    { MP_ROM_QSTR(MP_QSTR_func_i), MP_ROM_PTR(&mod_example_func_i_obj) },
    { MP_ROM_QSTR(MP_QSTR_Klass), MP_ROM_PTR(&mod_example_Klass_type) },
};

STATIC MP_DEFINE_CONST_DICT(mp_module_example_globals, mp_module_example_globals_table);

const mp_obj_module_t mp_module_example = {
    .base = { &mp_type_module },
    .name = MP_QSTR_example,
    .globals = (mp_obj_dict_t*)&mp_module_example_globals,
};
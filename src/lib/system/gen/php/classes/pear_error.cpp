/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#include <php/classes/pear_error.h>
#include <cpp/ext/ext.h>
#include <cpp/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/pear_error.php line 3 */
Variant c_pear_error::os_get(const char *s, int64 hash) {
  return c_ObjectData::os_get(s, hash);
}
Variant &c_pear_error::os_lval(const char *s, int64 hash) {
  return c_ObjectData::os_lval(s, hash);
}
void c_pear_error::o_get(ArrayElementVec &props) const {
  c_ObjectData::o_get(props);
}
bool c_pear_error::o_exists(CStrRef s, int64 hash) const {
  return c_ObjectData::o_exists(s, hash);
}
Variant c_pear_error::o_get(CStrRef s, int64 hash) {
  return c_ObjectData::o_get(s, hash);
}
Variant c_pear_error::o_set(CStrRef s, int64 hash, CVarRef v,bool forInit /* = false */) {
  return c_ObjectData::o_set(s, hash, v, forInit);
}
Variant &c_pear_error::o_lval(CStrRef s, int64 hash) {
  return c_ObjectData::o_lval(s, hash);
}
Variant c_pear_error::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
IMPLEMENT_CLASS(pear_error)
ObjectData *c_pear_error::create(CStrRef v_message //  = "unknown error"
, CVarRef v_code //  = null_variant
, CVarRef v_mode //  = null_variant
, CVarRef v_options //  = null_variant
, CVarRef v_userinfo //  = null_variant
) {
  init();
  t_pear_error(v_message, v_code, v_mode, v_options, v_userinfo);
  return this;
}
ObjectData *c_pear_error::dynCreate(CArrRef params, bool init /* = true */) {
  if (init) {
    int count = params.size();
    if (count <= 0) return (create());
    if (count == 1) return (create(params.rvalAt(0)));
    if (count == 2) return (create(params.rvalAt(0), params.rvalAt(1)));
    if (count == 3) return (create(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2)));
    if (count == 4) return (create(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2), params.rvalAt(3)));
    return (create(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2), params.rvalAt(3), params.rvalAt(4)));
  } else return this;
}
ObjectData *c_pear_error::cloneImpl() {
  c_pear_error *obj = NEW(c_pear_error)();
  cloneSet(obj);
  return obj;
}
void c_pear_error::cloneSet(c_pear_error *clone) {
  ObjectData::cloneSet(clone);
}
Variant c_pear_error::o_invoke(const char *s, CArrRef params, int64 hash, bool fatal) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        int count = params.size();
        if (count <= 0) return (t_getbacktrace(), null);
        return (t_getbacktrace(params.rvalAt(0)), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        return (t_adduserinfo(params.rvalAt(0)), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        int count = params.size();
        if (count <= 0) return (t_pear_error(), null);
        if (count == 1) return (t_pear_error(params.rvalAt(0)), null);
        if (count == 2) return (t_pear_error(params.rvalAt(0), params.rvalAt(1)), null);
        if (count == 3) return (t_pear_error(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2)), null);
        if (count == 4) return (t_pear_error(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2), params.rvalAt(3)), null);
        return (t_pear_error(params.rvalAt(0), params.rvalAt(1), params.rvalAt(2), params.rvalAt(3), params.rvalAt(4)), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke(s, params, hash, fatal);
}
Variant c_pear_error::o_invoke_few_args(const char *s, int64 hash, int count, CVarRef a0, CVarRef a1, CVarRef a2, CVarRef a3, CVarRef a4, CVarRef a5) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        if (count <= 0) return (t_getbacktrace(), null);
        return (t_getbacktrace(a0), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        return (t_adduserinfo(a0), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        if (count <= 0) return (t_pear_error(), null);
        if (count == 1) return (t_pear_error(a0), null);
        if (count == 2) return (t_pear_error(a0, a1), null);
        if (count == 3) return (t_pear_error(a0, a1, a2), null);
        if (count == 4) return (t_pear_error(a0, a1, a2, a3), null);
        return (t_pear_error(a0, a1, a2, a3, a4), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_few_args(s, hash, count, a0, a1, a2, a3, a4, a5);
}
Variant c_pear_error::os_invoke(const char *c, const char *s, CArrRef params, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke(c, s, params, hash, fatal);
}
Variant c_pear_error::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count = params.size();
        if (count <= 0) return (t_getbacktrace(), null);
        return (t_getbacktrace(a0), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_adduserinfo(a0), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        Variant a0;
        Variant a1;
        Variant a2;
        Variant a3;
        Variant a4;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a1 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a2 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a3 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a4 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count = params.size();
        if (count <= 0) return (t_pear_error(), null);
        if (count == 1) return (t_pear_error(a0), null);
        if (count == 2) return (t_pear_error(a0, a1), null);
        if (count == 3) return (t_pear_error(a0, a1, a2), null);
        if (count == 4) return (t_pear_error(a0, a1, a2, a3), null);
        return (t_pear_error(a0, a1, a2, a3, a4), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_pear_error::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
Variant cw_pear_error$os_get(const char *s) {
  return c_pear_error::os_get(s, -1);
}
Variant &cw_pear_error$os_lval(const char *s) {
  return c_pear_error::os_lval(s, -1);
}
Variant cw_pear_error$os_constant(const char *s) {
  return c_pear_error::os_constant(s);
}
Variant cw_pear_error$os_invoke(const char *c, const char *s, CArrRef params, bool fatal /* = true */) {
  return c_pear_error::os_invoke(c, s, params, -1, fatal);
}
void c_pear_error::init() {
}
/* SRC: classes/pear_error.php line 4 */
void c_pear_error::t_pear_error(CStrRef v_message //  = "unknown error"
, CVarRef v_code //  = null_variant
, CVarRef v_mode //  = null_variant
, CVarRef v_options //  = null_variant
, CVarRef v_userinfo //  = null_variant
) {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::pear_error);
  bool oldInCtor = gasInCtor(true);
  gasInCtor(oldInCtor);
} /* function */
/* SRC: classes/pear_error.php line 8 */
void c_pear_error::t_adduserinfo(CVarRef v_info) {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::addUserInfo);
} /* function */
/* SRC: classes/pear_error.php line 9 */
void c_pear_error::t_getcallback() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getCallback);
} /* function */
/* SRC: classes/pear_error.php line 10 */
void c_pear_error::t_getcode() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getCode);
} /* function */
/* SRC: classes/pear_error.php line 11 */
void c_pear_error::t_getmessage() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getMessage);
} /* function */
/* SRC: classes/pear_error.php line 12 */
void c_pear_error::t_getmode() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getMode);
} /* function */
/* SRC: classes/pear_error.php line 13 */
void c_pear_error::t_getdebuginfo() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getDebugInfo);
} /* function */
/* SRC: classes/pear_error.php line 14 */
void c_pear_error::t_gettype() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getType);
} /* function */
/* SRC: classes/pear_error.php line 15 */
void c_pear_error::t_getuserinfo() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getUserInfo);
} /* function */
/* SRC: classes/pear_error.php line 16 */
void c_pear_error::t_getbacktrace(CVarRef v_frame //  = null_variant
) {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::getBacktrace);
} /* function */
/* SRC: classes/pear_error.php line 18 */
void c_pear_error::t_tostring() {
  INSTANCE_METHOD_INJECTION(pear_error, pear_error::toString);
} /* function */
Object co_pear_error(CArrRef params, bool init /* = true */) {
  return Object(p_pear_error(NEW(c_pear_error)())->dynCreate(params, init));
}
Variant pm_php$classes$pear_error_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */) {
  FUNCTION_INJECTION(run_init::classes/pear_error.php);
  {
    DECLARE_SYSTEM_GLOBALS(g);
    bool &alreadyRun = g->run_pm_php$classes$pear_error_php;
    if (alreadyRun) { if (incOnce) return true;}
    else alreadyRun = true;
    if (!variables) variables = g;
  }
  DECLARE_SYSTEM_GLOBALS(g);
  LVariableTable *gVariables __attribute__((__unused__)) = get_variable_table();
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}

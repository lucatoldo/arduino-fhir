// Copyright (c) 2005-2020 Code Synthesis Tools CC.
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

// Begin prologue.
//
//
// End prologue.

#include <xsde/cxx/pre.hxx>

#include "binary-pskel.hxx"

namespace fhir
{
  // Binary_pskel
  //

  void Binary_pskel::
  contentType_parser (::fhir::code_pskel& p)
  {
    this->contentType_parser_ = &p;
  }

  void Binary_pskel::
  securityContext_parser (::fhir::Reference_pskel& p)
  {
    this->securityContext_parser_ = &p;
  }

  void Binary_pskel::
  data_parser (::fhir::base64Binary_pskel& p)
  {
    this->data_parser_ = &p;
  }

  void Binary_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::code_pskel& contentType,
           ::fhir::Reference_pskel& securityContext,
           ::fhir::base64Binary_pskel& data)
  {
    this->id_parser_ = &id;
    this->meta_parser_ = &meta;
    this->implicitRules_parser_ = &implicitRules;
    this->language_parser_ = &language;
    this->contentType_parser_ = &contentType;
    this->securityContext_parser_ = &securityContext;
    this->data_parser_ = &data;
  }

  Binary_pskel::
  Binary_pskel (::fhir::Resource_pskel* tiein)
  : ::fhir::Resource_pskel (tiein, 0),
    Binary_impl_ (0),
    contentType_parser_ (0),
    securityContext_parser_ (0),
    data_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  Binary_pskel::
  Binary_pskel (Binary_pskel* impl, void*)
  : ::fhir::Resource_pskel (impl, 0),
    Binary_impl_ (impl),
    contentType_parser_ (0),
    securityContext_parser_ (0),
    data_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // Binary_pskel
  //

  void Binary_pskel::
  contentType ()
  {
    if (this->Binary_impl_)
      this->Binary_impl_->contentType ();
  }

  void Binary_pskel::
  securityContext ()
  {
    if (this->Binary_impl_)
      this->Binary_impl_->securityContext ();
  }

  void Binary_pskel::
  data ()
  {
    if (this->Binary_impl_)
      this->Binary_impl_->data ();
  }

  void Binary_pskel::
  post_Binary ()
  {
    if (this->Binary_impl_)
      this->Binary_impl_->post_Binary ();
    else
      post_Resource ();
  }

  void Binary_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::Resource_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->contentType_parser_)
      this->contentType_parser_->_reset ();

    if (this->securityContext_parser_)
      this->securityContext_parser_->_reset ();

    if (this->data_parser_)
      this->data_parser_->_reset ();

    this->resetting_ = false;
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for Binary_pskel.
  //
  bool Binary_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::Resource_pskel base;
      if (base::_start_element_impl (ns, n))
        return true;
      else
        vd->state = 1;
    }

    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, ns, n, true);

      vd = vs.data + (vs.size - 1);

      if (vd->state == ~0UL && !ctx.error_type ())
        vd = vs.data + (--vs.size - 1);
      else
        break;
    }

    if (vd->func == 0)
    {
      if (vd->state != ~0UL)
      {
        unsigned long s = ~0UL;

        if (n == "contentType" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &Binary_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, true);
        }
        else
        {
          if (vd->count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            return true;
          }

          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool Binary_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::Resource_pskel base;
      if (!base::_end_element_impl (ns, n))
        assert (false);
      return true;
    }

    assert (vd.func != 0);
    (this->*vd.func) (vd.state, vd.count, ns, n, false);

    if (vd.state == ~0UL)
      vs.size--;

    return true;
  }

  void Binary_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::Resource_pskel base;
    base::_pre_e_validate ();
  }

  void Binary_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::Resource_pskel base;
    base::_post_e_validate ();

    if (ctx.error_type ())
      return;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    ::xsde::cxx::ro_string empty;
    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, empty, empty, true);

      if (ctx.error_type ())
        return;

      assert (vd->state == ~0UL);
      vd = vs.data + (--vs.size - 1);
    }

    if (vd->count < 1UL)
      this->_schema_error (::xsde::cxx::schema_error::expected_element);

    this->v_state_stack_.pop ();
  }

  void Binary_pskel::
  sequence_0 (unsigned long& state,
              unsigned long& count,
              const ::xsde::cxx::ro_string& ns,
              const ::xsde::cxx::ro_string& n,
              bool start)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    XSDE_UNUSED (ctx);

    switch (state)
    {
      case 0UL:
      {
        if (n == "contentType" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->contentType_parser_)
            {
              this->contentType_parser_->pre ();
              ctx.nested_parser (this->contentType_parser_);
            }
          }
          else
          {
            if (this->contentType_parser_ != 0)
            {
              this->contentType_parser_->post_code ();
              this->contentType ();
            }

            count = 0;
            state = 1UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 1UL;
          // Fall through.
        }
      }
      case 1UL:
      {
        if (n == "securityContext" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->securityContext_parser_)
            {
              this->securityContext_parser_->pre ();
              ctx.nested_parser (this->securityContext_parser_);
            }
          }
          else
          {
            if (this->securityContext_parser_ != 0)
            {
              this->securityContext_parser_->post_Reference ();
              this->securityContext ();
            }

            count = 0;
            state = 2UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "data" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->data_parser_)
            {
              this->data_parser_->pre ();
              ctx.nested_parser (this->data_parser_);
            }
          }
          else
          {
            if (this->data_parser_ != 0)
            {
              this->data_parser_->post_base64Binary ();
              this->data ();
            }

            count = 0;
            state = ~0UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = ~0UL;
          // Fall through.
        }
      }
      case ~0UL:
        break;
    }
  }
}

namespace fhir
{
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.


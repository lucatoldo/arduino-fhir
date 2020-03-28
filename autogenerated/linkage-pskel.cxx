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

#include "linkage-pskel.hxx"

namespace fhir
{
  // Linkage_pskel
  //

  void Linkage_pskel::
  active_parser (::fhir::boolean_pskel& p)
  {
    this->active_parser_ = &p;
  }

  void Linkage_pskel::
  author_parser (::fhir::Reference_pskel& p)
  {
    this->author_parser_ = &p;
  }

  void Linkage_pskel::
  item_parser (::fhir::Linkage_Item_pskel& p)
  {
    this->item_parser_ = &p;
  }

  void Linkage_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::boolean_pskel& active,
           ::fhir::Reference_pskel& author,
           ::fhir::Linkage_Item_pskel& item)
  {
    this->id_parser_ = &id;
    this->meta_parser_ = &meta;
    this->implicitRules_parser_ = &implicitRules;
    this->language_parser_ = &language;
    this->text_parser_ = &text;
    this->contained_parser_ = &contained;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->active_parser_ = &active;
    this->author_parser_ = &author;
    this->item_parser_ = &item;
  }

  Linkage_pskel::
  Linkage_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    Linkage_impl_ (0),
    active_parser_ (0),
    author_parser_ (0),
    item_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  Linkage_pskel::
  Linkage_pskel (Linkage_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    Linkage_impl_ (impl),
    active_parser_ (0),
    author_parser_ (0),
    item_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // Linkage_Item_pskel
  //

  void Linkage_Item_pskel::
  type_parser (::fhir::LinkageType_pskel& p)
  {
    this->type_parser_ = &p;
  }

  void Linkage_Item_pskel::
  resource_parser (::fhir::Reference_pskel& p)
  {
    this->resource_parser_ = &p;
  }

  void Linkage_Item_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::LinkageType_pskel& type,
           ::fhir::Reference_pskel& resource)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->type_parser_ = &type;
    this->resource_parser_ = &resource;
  }

  Linkage_Item_pskel::
  Linkage_Item_pskel (::fhir::BackboneElement_pskel* tiein)
  : ::fhir::BackboneElement_pskel (tiein, 0),
    Linkage_Item_impl_ (0),
    type_parser_ (0),
    resource_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  Linkage_Item_pskel::
  Linkage_Item_pskel (Linkage_Item_pskel* impl, void*)
  : ::fhir::BackboneElement_pskel (impl, 0),
    Linkage_Item_impl_ (impl),
    type_parser_ (0),
    resource_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // LinkageType_list_pskel
  //

  LinkageType_list_pskel::
  LinkageType_list_pskel (::fhir::code_primitive_pskel* tiein)
  : ::fhir::code_primitive_pskel (tiein, 0),
    LinkageType_list_impl_ (0)
  {
    this->_enumeration_facet (_xsde_LinkageType_list_pskel_enums_, 3UL);
  }

  LinkageType_list_pskel::
  LinkageType_list_pskel (LinkageType_list_pskel* impl, void*)
  : ::fhir::code_primitive_pskel (impl, 0),
    LinkageType_list_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_LinkageType_list_pskel_enums_, 3UL);
  }

  // LinkageType_pskel
  //

  void LinkageType_pskel::
  value_parser (::fhir::LinkageType_list_pskel& p)
  {
    this->value_parser_ = &p;
  }

  void LinkageType_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::LinkageType_list_pskel& value)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->value_parser_ = &value;
  }

  LinkageType_pskel::
  LinkageType_pskel (::fhir::Element_pskel* tiein)
  : ::fhir::Element_pskel (tiein, 0),
    LinkageType_impl_ (0),
    value_parser_ (0)
  {
  }

  LinkageType_pskel::
  LinkageType_pskel (LinkageType_pskel* impl, void*)
  : ::fhir::Element_pskel (impl, 0),
    LinkageType_impl_ (impl),
    value_parser_ (0)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // Linkage_pskel
  //

  void Linkage_pskel::
  active ()
  {
    if (this->Linkage_impl_)
      this->Linkage_impl_->active ();
  }

  void Linkage_pskel::
  author ()
  {
    if (this->Linkage_impl_)
      this->Linkage_impl_->author ();
  }

  void Linkage_pskel::
  item ()
  {
    if (this->Linkage_impl_)
      this->Linkage_impl_->item ();
  }

  void Linkage_pskel::
  post_Linkage ()
  {
    if (this->Linkage_impl_)
      this->Linkage_impl_->post_Linkage ();
    else
      post_DomainResource ();
  }

  void Linkage_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::DomainResource_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->active_parser_)
      this->active_parser_->_reset ();

    if (this->author_parser_)
      this->author_parser_->_reset ();

    if (this->item_parser_)
      this->item_parser_->_reset ();

    this->resetting_ = false;
  }

  // Linkage_Item_pskel
  //

  void Linkage_Item_pskel::
  type ()
  {
    if (this->Linkage_Item_impl_)
      this->Linkage_Item_impl_->type ();
  }

  void Linkage_Item_pskel::
  resource ()
  {
    if (this->Linkage_Item_impl_)
      this->Linkage_Item_impl_->resource ();
  }

  void Linkage_Item_pskel::
  post_Linkage_Item ()
  {
    if (this->Linkage_Item_impl_)
      this->Linkage_Item_impl_->post_Linkage_Item ();
    else
      post_BackboneElement ();
  }

  void Linkage_Item_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::BackboneElement_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->type_parser_)
      this->type_parser_->_reset ();

    if (this->resource_parser_)
      this->resource_parser_->_reset ();

    this->resetting_ = false;
  }

  // LinkageType_list_pskel
  //

  void LinkageType_list_pskel::
  post_LinkageType_list ()
  {
    if (this->LinkageType_list_impl_)
      this->LinkageType_list_impl_->post_LinkageType_list ();
    else
      post_code_primitive ();
  }

  const char* const LinkageType_list_pskel::_xsde_LinkageType_list_pskel_enums_[3UL] = 
  {
    "alternate",
    "historical",
    "source"
  };

  // LinkageType_pskel
  //

  void LinkageType_pskel::
  value ()
  {
    if (this->LinkageType_impl_)
      this->LinkageType_impl_->value ();
  }

  void LinkageType_pskel::
  post_LinkageType ()
  {
    if (this->LinkageType_impl_)
      this->LinkageType_impl_->post_LinkageType ();
    else
      post_Element ();
  }

  void LinkageType_pskel::
  _reset ()
  {
    typedef ::fhir::Element_pskel base;
    base::_reset ();

    if (this->value_parser_)
      this->value_parser_->_reset ();
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for Linkage_pskel.
  //
  bool Linkage_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
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

        if (n == "active" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "author" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "item" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &Linkage_pskel::sequence_0;
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

  bool Linkage_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
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

  void Linkage_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::DomainResource_pskel base;
    base::_pre_e_validate ();
  }

  void Linkage_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::DomainResource_pskel base;
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

  void Linkage_pskel::
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
        if (n == "active" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->active_parser_)
            {
              this->active_parser_->pre ();
              ctx.nested_parser (this->active_parser_);
            }
          }
          else
          {
            if (this->active_parser_ != 0)
            {
              this->active_parser_->post_boolean ();
              this->active ();
            }

            count = 0;
            state = 1UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 1UL;
          // Fall through.
        }
      }
      case 1UL:
      {
        if (n == "author" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->author_parser_)
            {
              this->author_parser_->pre ();
              ctx.nested_parser (this->author_parser_);
            }
          }
          else
          {
            if (this->author_parser_ != 0)
            {
              this->author_parser_->post_Reference ();
              this->author ();
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
        if (n == "item" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->item_parser_)
            {
              this->item_parser_->pre ();
              ctx.nested_parser (this->item_parser_);
            }
          }
          else
          {
            if (this->item_parser_ != 0)
            {
              this->item_parser_->post_Linkage_Item ();
              this->item ();
            }

            count++;
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
          state = ~0UL;
          // Fall through.
        }
      }
      case ~0UL:
        break;
    }
  }

  // Element validation and dispatch functions for Linkage_Item_pskel.
  //
  bool Linkage_Item_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::BackboneElement_pskel base;
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

        if (n == "type" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &Linkage_Item_pskel::sequence_0;
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

  bool Linkage_Item_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::BackboneElement_pskel base;
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

  void Linkage_Item_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::BackboneElement_pskel base;
    base::_pre_e_validate ();
  }

  void Linkage_Item_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::BackboneElement_pskel base;
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

  void Linkage_Item_pskel::
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
        if (n == "type" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->type_parser_)
            {
              this->type_parser_->pre ();
              ctx.nested_parser (this->type_parser_);
            }
          }
          else
          {
            if (this->type_parser_ != 0)
            {
              this->type_parser_->post_LinkageType ();
              this->type ();
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
        if (n == "resource" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->resource_parser_)
            {
              this->resource_parser_->pre ();
              ctx.nested_parser (this->resource_parser_);
            }
          }
          else
          {
            if (this->resource_parser_ != 0)
            {
              this->resource_parser_->post_Reference ();
              this->resource ();
            }

            count = 0;
            state = ~0UL;
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
  // Attribute validation and dispatch functions for LinkageType_pskel.
  //
  bool LinkageType_pskel::
  _attribute_impl_phase_one (const ::xsde::cxx::ro_string& ns,
                             const ::xsde::cxx::ro_string& n,
                             const ::xsde::cxx::ro_string& s)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    if (n == "value" && ns.empty ())
    {
      if (this->value_parser_)
      {
        this->value_parser_->pre ();

        this->value_parser_->_pre_impl (ctx);

        if (!ctx.error_type ())
          this->value_parser_->_characters (s);

        if (!ctx.error_type ())
          this->value_parser_->_post_impl ();

        if (!ctx.error_type ())
          this->value_parser_->post_LinkageType_list ();

        this->value ();
      }

      return true;
    }

    typedef ::fhir::Element_pskel base;
    return base::_attribute_impl_phase_one (ns, n, s);
  }
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.


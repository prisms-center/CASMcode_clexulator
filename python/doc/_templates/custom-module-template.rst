{{ fullname | escape | underline}}

.. automodule:: {{ fullname }}

  {% block attributes %}
  {% if attributes %}
  .. rubric:: Module Attributes

  .. autosummary::
    :signatures: short
    :toctree:
  {% for item in attributes %}
    {{ item }}
  {%- endfor %}
  {% endif %}
  {% endblock %}

  {% block functions %}
  {% if functions %}
  .. rubric:: {{ _('Functions') }}

  .. autosummary::
    :signatures: short
    :toctree:
    :template: custom-function-template.rst
  {% for item in functions %}
    {{ item }}
  {%- endfor %}
  {% endif %}
  {% endblock %}

  {% block classes %}
  {% if classes %}
  .. rubric:: {{ _('Classes') }}

  .. autosummary::
    :signatures: short
    :toctree:
    :template: custom-class-template.rst
  {% for item in classes %}
    {{ item }}
  {%- endfor %}
  {% endif %}
  {% endblock %}

  {% block exceptions %}
  {% if exceptions %}
  .. rubric:: {{ _('Exceptions') }}

  .. autosummary::
    :signatures: short
    :toctree:
  {% for item in exceptions %}
    {{ item }}
  {%- endfor %}
  {% endif %}
  {% endblock %}

{% block modules %}
{% if modules %}
.. rubric:: Modules

.. autosummary::
  :toctree:
  :template: custom-module-template.rst
  :recursive:
{% for item in modules %}
  {{ item }}
{%- endfor %}
{% endif %}
{% endblock %}

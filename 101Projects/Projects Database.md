---

database-plugin: basic

---
# Projects Database

```yaml:dbfolder
name: Projects
description: 记录与管理一些长期项目
columns:
  __file__:
    key: __file__
    id: __file__
    input: markdown
    label: File
    accessorKey: __file__
    isMetadata: true
    skipPersist: false
    isDragDisabled: false
    csvCandidate: true
    position: 1
    isHidden: false
    sortIndex: -1
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: true
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Status:
    input: select
    accessorKey: Status
    key: Status
    id: Status
    label: Status
    position: 2
    skipPersist: false
    isHidden: false
    sortIndex: -1
    isSorted: false
    isSortedDesc: true
    options:
      - { label: "Ready", value: "Ready", color: "hsl(251, 95%, 90%)"}
      - { label: "Done", value: "Done", color: "hsl(5, 95%, 90%)"}
      - { label: "Running", value: "Running", color: "hsl(222, 95%, 90%)"}
      - { label: "Blocked", value: "Blocked", color: "hsl(278, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Process:
    input: text
    accessorKey: Process
    key: Process
    id: Process
    label: Process
    position: 5
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 163
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Priority:
    input: number
    accessorKey: Priority
    key: Priority
    id: Priority
    label: Priority
    position: 4
    skipPersist: false
    isHidden: false
    sortIndex: 0
    isSorted: true
    isSortedDesc: true
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  tags:
    input: tags
    accessorKey: tags
    key: tags
    id: tags
    label: tags
    position: 3
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 498
    options:
      - { label: "Project/Program", value: "Project/Program", color: "hsl(9, 95%, 90%)"}
      - { label: "计算机/操作系统", value: "计算机/操作系统", color: "hsl(92, 95%, 90%)"}
      - { label: "计算机/编程语言/Rust", value: "计算机/编程语言/Rust", color: "hsl(109, 95%, 90%)"}
      - { label: "计算机/数据库", value: "计算机/数据库", color: "hsl(53, 95%, 90%)"}
      - { label: "Project", value: "Project", color: "hsl(259, 95%, 90%)"}
      - { label: "Course", value: "Course", color: "hsl(289, 95%, 90%)"}
      - { label: "Project/Book", value: "Project/Book", color: "hsl(127, 95%, 90%)"}
      - { label: "Reading/Book", value: "Reading/Book", color: "hsl(233, 95%, 90%)"}
      - { label: "计算机/组成原理", value: "计算机/组成原理", color: "hsl(232, 95%, 90%)"}
      - { label: "计算机/数据结构", value: "计算机/数据结构", color: "hsl(199, 95%, 90%)"}
      - { label: "计算机/编程语言/Cpp", value: "计算机/编程语言/Cpp", color: "hsl(163, 95%, 90%)"}
      - { label: "计算机/编程语言/C", value: "计算机/编程语言/C", color: "hsl(216, 95%, 90%)"}
      - { label: "kcyj", value: "kcyj", color: "hsl(42, 95%, 90%)"}
      - { label: "考研", value: "考研", color: "hsl(170, 95%, 90%)"}
      - { label: "Project/Course", value: "Project/Course", color: "hsl(43, 95%, 90%)"}
      - { label: "Project/Exam", value: "Project/Exam", color: "hsl(9, 95%, 90%)"}
      - { label: "数学", value: "数学", color: "hsl(45, 95%, 90%)"}
      - { label: "Project/试题册", value: "Project/试题册", color: "hsl(299, 95%, 90%)"}
      - { label: "Project/Tutorial", value: "Project/Tutorial", color: "hsl(166, 95%, 90%)"}
      - { label: "AI", value: "AI", color: "hsl(358, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
      option_source: manual
config:
  remove_field_when_delete_column: false
  cell_size: wide
  sticky_first_column: false
  group_folder_column: 
  remove_empty_folders: false
  automatically_group_files: false
  hoist_files_with_empty_attributes: true
  show_metadata_created: false
  show_metadata_modified: false
  show_metadata_tasks: false
  show_metadata_inlinks: false
  show_metadata_outlinks: false
  show_metadata_tags: false
  source_data: current_folder
  source_form_result: 
  source_destination_path: /
  row_templates_folder: /
  current_row_template: 
  pagination_size: 40
  font_size: 16
  enable_js_formulas: false
  formula_folder_path: /
  inline_default: false
  inline_new_position: last_field
  date_format: yyyy-MM-dd
  datetime_format: "yyyy-MM-dd HH:mm:ss"
  metadata_date_format: "yyyy-MM-dd HH:mm:ss"
  enable_footer: false
  implementation: default
filters:
  enabled: false
  conditions:
```
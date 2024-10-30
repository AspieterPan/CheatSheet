# Obsidian-Vimrc-Support

- https://github.com/esm7/obsidian-vimrc-support

## Config-Example
---
```vimrc
" Have j and k navigate visual lines rather than logical ones
nmap j gj
nmap k gk
" I like using H and L for beginning/end of line
nmap H ^
nmap L $
" Quickly remove search highlights
nmap <F9> :nohl

" Yank to system clipboard
set clipboard=unnamed

" Go back and forward with Ctrl+O and Ctrl+I
" (make sure to remove default Obsidian shortcuts for these to work)
exmap back obcommand app:go-back
nmap <C-o> :back
exmap forward obcommand app:go-forward
nmap <C-i> :forward
```
## Available commands
---
1. open obsidian console (using `command+option+i`)
2. type `:obcommand` 
3. see available commands in 
```
editor:save-file
editor:follow-link
editor:open-link-in-new-leaf
editor:open-link-in-new-window
workspace:toggle-pin
editor:open-link-in-new-split
editor:focus-top
editor:focus-bottom
editor:focus-left
editor:focus-right
workspace:split-vertical
workspace:split-horizontal
workspace:toggle-stacked-tabs
workspace:edit-file-title
workspace:copy-path
workspace:copy-url
workspace:undo-close-pane
workspace:export-pdf
editor:rename-heading
workspace:open-in-new-window
workspace:move-to-new-window
workspace:next-tab
workspace:goto-tab-1
workspace:goto-tab-2
workspace:goto-tab-3
workspace:goto-tab-4
workspace:goto-tab-5
workspace:goto-tab-6
workspace:goto-tab-7
workspace:goto-tab-8
workspace:goto-last-tab
workspace:previous-tab
workspace:new-tab
workspace:show-trash
table-editor-obsidian:next-row
table-editor-obsidian:next-cell
table-editor-obsidian:previous-cell
table-editor-obsidian:format-table
table-editor-obsidian:format-all-tables
table-editor-obsidian:insert-column
table-editor-obsidian:insert-row
table-editor-obsidian:escape-table
table-editor-obsidian:left-align-column
table-editor-obsidian:center-align-column
table-editor-obsidian:right-align-column
table-editor-obsidian:move-column-left
table-editor-obsidian:move-column-right
table-editor-obsidian:move-row-up
table-editor-obsidian:move-row-down
table-editor-obsidian:delete-column
table-editor-obsidian:delete-row
table-editor-obsidian:sort-rows-ascending
table-editor-obsidian:sort-rows-descending
table-editor-obsidian:evaluate-formulas
table-editor-obsidian:table-control-bar
dataview:dataview-force-refresh-views
dataview:dataview-drop-cache
obsidian-mind-map:app:markmap-preview
obsidian-filename-heading-sync:page-heading-sync-ignore-file
obsidian-filename-heading-sync:sync-filename-to-heading
obsidian-filename-heading-sync:sync-heading-to-filename
calendar:show-calendar-view
calendar:open-weekly-note
calendar:reveal-active-note
templater-obsidian:insert-templater
templater-obsidian:replace-in-file-templater
templater-obsidian:jump-to-next-cursor-location
templater-obsidian:create-new-note-from-template
obsidian-projects:show-projects
obsidian-projects:create-project
obsidian-projects:create-note
obsidian-latex-suite:latex-suite-box-equation
obsidian-latex-suite:latex-suite-select-equation
obsidian-latex-suite:latex-suite-enable-all-features
obsidian-latex-suite:latex-suite-disable-all-features
daily-notes-editor:open-daily-note-editor
obsidian-outliner:show-release-notes
obsidian-outliner:system-info
obsidian-outliner:move-list-item-up
obsidian-outliner:move-list-item-down
obsidian-outliner:indent-list
obsidian-outliner:outdent-list
obsidian-outliner:fold
obsidian-outliner:unfold
obsidian-quiet-outline:quiet-outline
obsidian-quiet-outline:quiet-outline-reset
obsidian-quiet-outline:quiet-outline-focus-input
obsidian-quiet-outline:quiet-outline-copy-as-text
recent-files-obsidian:recent-files-open
obsidian-tasks-plugin:edit-task
obsidian-tasks-plugin:toggle-done
various-complements:reload-custom-dictionaries
various-complements:reload-current-vault
various-complements:toggle-match-strategy
various-complements:toggle-complement-automatically
various-complements:show-suggestions
various-complements:hide-suggestions
various-complements:add-word-custom-dictionary
various-complements:predictable-complements
various-complements:copy-plugin-settings
obsidian-heading-shifter:apply-heading0
obsidian-heading-shifter:apply-heading1
obsidian-heading-shifter:apply-heading2
obsidian-heading-shifter:apply-heading3
obsidian-heading-shifter:apply-heading4
obsidian-heading-shifter:apply-heading5
obsidian-heading-shifter:apply-heading6
obsidian-heading-shifter:increase-heading
obsidian-heading-shifter:decrease-heading
obsidian-heading-shifter:insert-heading-current
obsidian-heading-shifter:insert-heading-deeper
obsidian-heading-shifter:insert-heading-higher
url-into-selection:paste-url-into-selection
obsidian-wikipedia:wikipedia-get-active-note-title
obsidian-wikipedia:wikipedia-get-search-term
mermaid-tools:open-toolbar
quickadd:runQuickAdd
quickadd:reloadQuickAdd
quickadd:testQuickAdd
quickadd:choice:31682727-9e9b-48ec-8a45-7d3c105dcb2f
quickadd:choice:ef600093-ecaf-4727-97ae-742bcb76daca
smart-random-note:open-random-note
smart-random-note:open-tagged-random-note
smart-random-note:open-random-note-from-search
smart-random-note:insert-link-to-random-note-at-cursor
obsidian-hover-editor:bounce-popovers
obsidian-hover-editor:open-new-popover
obsidian-hover-editor:open-link-in-new-popover
obsidian-hover-editor:open-current-file-in-new-popover
obsidian-hover-editor:convert-active-pane-to-popover
obsidian-hover-editor:dock-active-popover-to-workspace
obsidian-hover-editor:restore-active-popover
obsidian-hover-editor:minimize-active-popover
obsidian-hover-editor:snap-active-popover-to-left
obsidian-hover-editor:snap-active-popover-to-right
obsidian-hover-editor:snap-active-popover-to-viewport
obsidian-copy-block-link:copy-link-to-block
obsidian-copy-block-link:copy-embed-to-block
obsidian-paste-image-rename:batch-rename-embeded-files
obsidian-paste-image-rename:batch-rename-all-images
oz-image-plugin:toggle-render-all
oz-image-plugin:toggle-render-images
oz-image-plugin:toggle-render-pdfs
oz-image-plugin:toggle-render-transclusion
oz-image-plugin:toggle-render-iframe
oz-image-plugin:toggle-render-excalidraw
vantage-obsidian:build-search
obsidian-footnotes:insert-autonumbered-footnote
obsidian-footnotes:insert-named-footnote
obsidian-tidy-footnotes:tidy-footnotes
readwise-official:readwise-official-sync
readwise-official:readwise-official-format
readwise-official:readwise-official-reimport-file
dbfolder:create-new-database-folder
dbfolder:active-database-folder-go-next-page
dbfolder:active-database-folder-go-previous-page
dbfolder:active-database-folder-add-new-row
dbfolder:active-database-folder-open-settings
dbfolder:active-database-folder-toggle-filters
dbfolder:active-database-folder-open-filters
darlal-switcher-plus:switcher-plus:open
darlal-switcher-plus:switcher-plus:open-editors
darlal-switcher-plus:switcher-plus:open-symbols
darlal-switcher-plus:switcher-plus:open-symbols-active
darlal-switcher-plus:switcher-plus:open-workspaces
darlal-switcher-plus:switcher-plus:open-headings
darlal-switcher-plus:switcher-plus:open-starred
darlal-switcher-plus:switcher-plus:open-commands
darlal-switcher-plus:switcher-plus:open-related-items
darlal-switcher-plus:switcher-plus:open-related-items-active
folder-note-plugin:insert-folder-brief
folder-note-plugin:note-to-folder
obsidian-spaced-repetition:srs-note-review-open-note
obsidian-spaced-repetition:srs-note-review-easy
obsidian-spaced-repetition:srs-note-review-good
obsidian-spaced-repetition:srs-note-review-hard
obsidian-spaced-repetition:srs-review-flashcards
obsidian-spaced-repetition:srs-cram-flashcards
obsidian-spaced-repetition:srs-review-flashcards-in-note
obsidian-spaced-repetition:srs-cram-flashcards-in-note
obsidian-spaced-repetition:srs-view-stats
obsidian-zoom:zoom-in
obsidian-zoom:zoom-out
nldates-obsidian:nlp-dates
nldates-obsidian:nlp-dates-link
nldates-obsidian:nlp-date-clean
nldates-obsidian:nlp-parse-time
nldates-obsidian:nlp-now
nldates-obsidian:nlp-today
nldates-obsidian:nlp-time
nldates-obsidian:nlp-picker
media-extended:take-rec-timestamp
media-extended:get-timestamp
media-extended:open-media-link
obsidian-linter:lint-file
obsidian-linter:lint-file-unless-ignored
obsidian-linter:lint-all-files
obsidian-linter:lint-all-files-in-folder
obsidian-linter:paste-as-plain-text
obsidian-excalidraw-plugin:excalidraw-convert-image-from-url-to-local-file
obsidian-excalidraw-plugin:excalidraw-unzip-file
obsidian-excalidraw-plugin:excalidraw-publish-svg-check
obsidian-excalidraw-plugin:excalidraw-embeddable-poroperties
obsidian-excalidraw-plugin:excalidraw-embeddables-relative-scale
obsidian-excalidraw-plugin:open-image-excalidraw-source
obsidian-excalidraw-plugin:excalidraw-disable-autosave
obsidian-excalidraw-plugin:excalidraw-enable-autosave
obsidian-excalidraw-plugin:excalidraw-download-lib
obsidian-excalidraw-plugin:excalidraw-open
obsidian-excalidraw-plugin:excalidraw-open-on-current
obsidian-excalidraw-plugin:excalidraw-insert-transclusion
obsidian-excalidraw-plugin:excalidraw-insert-last-active-transclusion
obsidian-excalidraw-plugin:excalidraw-autocreate
obsidian-excalidraw-plugin:excalidraw-autocreate-newtab
obsidian-excalidraw-plugin:excalidraw-autocreate-on-current
obsidian-excalidraw-plugin:excalidraw-autocreate-popout
obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed
obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-new-tab
obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-on-current
obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-popout
obsidian-excalidraw-plugin:run-ocr
obsidian-excalidraw-plugin:search-text
obsidian-excalidraw-plugin:fullscreen
obsidian-excalidraw-plugin:disable-binding
obsidian-excalidraw-plugin:disable-framerendering
obsidian-excalidraw-plugin:disable-frameclipping
obsidian-excalidraw-plugin:export-image
obsidian-excalidraw-plugin:save
obsidian-excalidraw-plugin:toggle-lock
obsidian-excalidraw-plugin:scriptengine-store
obsidian-excalidraw-plugin:delete-file
obsidian-excalidraw-plugin:convert-text2MD
obsidian-excalidraw-plugin:insert-link
obsidian-excalidraw-plugin:insert-command
obsidian-excalidraw-plugin:insert-link-to-element
obsidian-excalidraw-plugin:insert-link-to-element-group
obsidian-excalidraw-plugin:insert-link-to-element-frame
obsidian-excalidraw-plugin:insert-link-to-element-area
obsidian-excalidraw-plugin:toggle-lefthanded-mode
obsidian-excalidraw-plugin:reset-image-to-100
obsidian-excalidraw-plugin:crop-image
obsidian-excalidraw-plugin:insert-image
obsidian-excalidraw-plugin:import-svg
obsidian-excalidraw-plugin:release-notes
obsidian-excalidraw-plugin:tray-mode
obsidian-excalidraw-plugin:insert-md
obsidian-excalidraw-plugin:insert-pdf
obsidian-excalidraw-plugin:universal-add-file
obsidian-excalidraw-plugin:insert-LaTeX-symbol
obsidian-excalidraw-plugin:toggle-excalidraw-view
obsidian-excalidraw-plugin:convert-to-excalidraw
obsidian-excalidraw-plugin:convert-excalidraw
surfing:open-current-url-with-external-browser
surfing:clear-current-page-history
surfing:refresh-page
surfing:toggle-same-tab-globally
surfing:get-current-timestamp
surfing:search-in-current-page-title-bar
surfing:usingGoogle-to-search
surfing:usingBing-to-search
surfing:usingDuckduckgo-to-search
surfing:usingYahoo-to-search
surfing:usingBaidu-to-search
surfing:usingYandex-to-search
surfing:usingWikipedia-to-search
surfing:usingduckduckgo-to-search
surfing:toggle-dark-mode
surfing:focus-on-current-search-bar
surfing:copy-link-to-highlight
surfing:copy-surfing-tabs-as-markdown
obsidian-style-settings:show-style-settings-leaf
workspaces-plus:open-workspaces-plus
workspaces-plus:save-workspace
note-refactor-obsidian:app:extract-selection-first-line
note-refactor-obsidian:app:extract-selection-content-only
note-refactor-obsidian:app:extract-selection-autogenerate-name
note-refactor-obsidian:app:split-note-first-line
note-refactor-obsidian:app:split-note-content-only
note-refactor-obsidian:app:split-note-by-heading-h1
note-refactor-obsidian:app:split-note-by-heading-h2
note-refactor-obsidian:app:split-note-by-heading-h3
obsidian-hider:toggle-tab-containers
obsidian-hider:toggle-app-ribbon
obsidian-hider:toggle-hider-status
open-with:copy-absolute-file-path
open-with:show-file-in-explorer
open-with:open-file-with-nvim
open-with:open-file-with-vscode
app:go-back
app:go-forward
app:open-vault
theme:use-dark
theme:use-light
theme:switch
app:open-settings
app:show-release-notes
markdown:toggle-preview
markdown:add-metadata-property
markdown:edit-metadata-property
markdown:clear-metadata-properties
workspace:close
workspace:close-window
workspace:close-others
workspace:close-tab-group
workspace:close-others-tab-group
app:delete-file
app:toggle-left-sidebar
app:toggle-right-sidebar
app:toggle-default-new-pane-mode
app:open-help
app:reload
app:show-debug-info
app:open-sandbox-vault
window:toggle-always-on-top
window:zoom-in
window:zoom-out
window:reset-zoom
file-explorer:new-file
file-explorer:new-file-in-current-tab
file-explorer:new-file-in-new-pane
open-with-default-app:open
file-explorer:move-file
file-explorer:duplicate-file
open-with-default-app:show
editor:toggle-source
editor:open-search
editor:open-search-replace
editor:focus
editor:toggle-fold-properties
editor:toggle-fold
editor:fold-all
editor:unfold-all
editor:fold-less
editor:fold-more
editor:insert-wikilink
editor:insert-embed
editor:insert-link
editor:insert-tag
editor:set-heading
editor:set-heading-0
editor:set-heading-1
editor:set-heading-2
editor:set-heading-3
editor:set-heading-4
editor:set-heading-5
editor:set-heading-6
editor:toggle-bold
editor:toggle-italics
editor:toggle-strikethrough
editor:toggle-highlight
editor:toggle-code
editor:toggle-inline-math
editor:toggle-blockquote
editor:toggle-comments
editor:clear-formatting
editor:toggle-bullet-list
editor:toggle-numbered-list
editor:toggle-checklist-status
editor:cycle-list-checklist
editor:insert-callout
editor:insert-codeblock
editor:insert-horizontal-rule
editor:insert-mathblock
editor:insert-table
editor:swap-line-up
editor:swap-line-down
editor:attach-file
editor:delete-paragraph
editor:add-cursor-below
editor:add-cursor-above
editor:toggle-spellcheck
editor:table-row-before
editor:table-row-after
editor:table-row-up
editor:table-row-down
editor:table-row-copy
editor:table-row-delete
editor:table-col-before
editor:table-col-after
editor:table-col-left
editor:table-col-right
editor:table-col-copy
editor:table-col-delete
editor:table-col-align-left
editor:table-col-align-center
editor:table-col-align-right
editor:context-menu
file-explorer:open
file-explorer:reveal-active-file
global-search:open
switcher:open
graph:open
graph:open-local
graph:animate
backlink:open
backlink:open-backlinks
backlink:toggle-backlinks-in-document
canvas:new-file
canvas:export-as-image
canvas:jump-to-group
canvas:convert-to-file
outgoing-links:open
outgoing-links:open-for-current
tag-pane:open
properties:open
properties:open-local
insert-template
insert-current-date
insert-current-time
note-composer:merge-file
note-composer:split-file
note-composer:extract-heading
command-palette:open
bookmarks:open
bookmarks:bookmark-current-view
bookmarks:bookmark-current-search
bookmarks:unbookmark-current-view
bookmarks:bookmark-current-section
bookmarks:bookmark-current-heading
bookmarks:bookmark-all-tabs
random-note
outline:open
outline:open-for-current
audio-recorder:start
audio-recorder:stop
workspaces:load
workspaces:save-and-load
workspaces:open-modal
file-recovery:open
obsidian-memos:open-memos
obsidian-memos:focus-on-memos-editor
obsidian-memos:show-daily-memo
obsidian-memos:note-it
obsidian-memos:focus-on-search-bar
obsidian-memos:change-status
obsidian-memos:show-memos-in-popover
obsidian-admonition:collapse-admonitions
obsidian-admonition:open-admonitions
obsidian-admonition:insert-admonition
obsidian-admonition:insert-callout
obsidian-excalidraw-plugin:Downloaded/Add Link to New Page and Open
periodic-notes:open-daily-note
periodic-notes:next-daily-note
periodic-notes:prev-daily-note
periodic-notes:open-weekly-note
periodic-notes:next-weekly-note
periodic-notes:prev-weekly-note
periodic-notes:open-monthly-note
periodic-notes:next-monthly-note
periodic-notes:prev-monthly-note
periodic-notes:open-quarterly-note
periodic-notes:next-quarterly-note
periodic-notes:prev-quarterly-note
periodic-notes:open-yearly-note
periodic-notes:next-yearly-note
periodic-notes:prev-yearly-note
workspaces-plus:Default
```
# mkdocs

1. link
   * [documentation](https://www.mkdocs.org/)
   * [github](https://github.com/mkdocs/mkdocs/)
2. install
   * `conda install -c conda-forge mkdocs`
   * `pip install mkdocs`
3. `mkdocs.yml`
   * `site_name`: required
   * `site_url`: 默认值`https://example.com/`
4. ignore `.foo.md`, `.bar/baz.md`

```bash
mkdocs new my-project
mkdocs serve
mkdocs build

pip install pymdown-extensions
pip install mkdocs-material
```

```yaml
site_name: MkLorum
site_url: https://example.com/
nav:
  - Home: index.md
  - About: about.md
theme: readthedocs
```

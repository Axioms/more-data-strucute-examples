.PHONY: clean All

All:
	@echo "----------Building project:[ week_6 - Debug ]----------"
	@cd "week_6" && "$(MAKE)" -f  "week_6.mk"
clean:
	@echo "----------Cleaning project:[ week_6 - Debug ]----------"
	@cd "week_6" && "$(MAKE)" -f  "week_6.mk" clean

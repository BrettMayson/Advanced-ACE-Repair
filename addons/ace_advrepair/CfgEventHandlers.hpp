
class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

//Need initPost or we have problems with setVariable with addSpareParts
class Extended_InitPost_EventHandlers {
    class Car {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
        };
    };
    class Tank {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
        };
    };
    class Motorcycle {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
        };
    };
    class Helicopter {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
            exclude[] = {QEGVAR(fastroping,helper), "ACE_friesBase", QEGVAR(refuel,helper)};
        };
    };
    class Plane {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
        };
    };
    class Ship_F {
        class ace_repair {
            init = QUOTE(_this call DFUNC(addAdvRepairActions));
        };
    };
	class FL_RepairItem {
		class ace_repair {
			init = QUOTE(_this call DFUNC(addPartAdvRepairActions));
		};
	};
};

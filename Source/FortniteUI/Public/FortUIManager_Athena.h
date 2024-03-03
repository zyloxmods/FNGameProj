#pragma once
#include "CoreMinimal.h"
#include "FortUIManagerInterface.h"
#include "FortUIManager.h"
#include "Templates/SubclassOf.h"
#include "FortUIManager_Athena.generated.h"

class UFortLocalPlayer;
class UFortRootViewportLayout_Athena;
class ULetoHudOverlay;
class USidekickOverlay;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortUIManager_Athena : public UFortUIManager, public IFortUIManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULetoHudOverlay> LetoHudOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULetoHudOverlay* LetoHudOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USidekickOverlay> SidekickOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USidekickOverlay* SidekickOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortLocalPlayer*, UFortRootViewportLayout_Athena*> PlayerWidgets;
    
public:
    UFortUIManager_Athena();
    
    // Fix for true pure virtual functions not being implemented
};


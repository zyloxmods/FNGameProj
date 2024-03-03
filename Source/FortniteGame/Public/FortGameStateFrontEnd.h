#pragma once
#include "CoreMinimal.h"
#include "FortGameState.h"
#include "Templates/SubclassOf.h"
#include "FortGameStateFrontEnd.generated.h"

class AFortFrontEndMiniMapManager;
class IFortMiniMapInterface;
class UFortMiniMapInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateFrontEnd : public AFortGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortMiniMapInterface> MiniMapInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortFrontEndMiniMapManager> MiniMapManagerClass;
    
public:
    AFortGameStateFrontEnd();
};


#pragma once
#include "CoreMinimal.h"
#include "FortUIManager.h"
#include "FortUIManager_Campaign.generated.h"

class IFortUIManagerInterface;
class UFortUIManagerInterface;
class UFortLocalPlayer;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortUIManager_Campaign : public UFortUIManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortLocalPlayer*, TScriptInterface<IFortUIManagerInterface>> UIManagerInterfaces;
    
public:
    UFortUIManager_Campaign();
};


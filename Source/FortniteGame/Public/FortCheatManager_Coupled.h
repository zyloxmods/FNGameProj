#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_Coupled.generated.h"

class AFortPlayerController;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCheatManager_Coupled : public UChildCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwningController;
    
public:
    UFortCheatManager_Coupled();
};


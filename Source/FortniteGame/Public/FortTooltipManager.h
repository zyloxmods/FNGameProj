#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortTooltipManager.generated.h"

class AActor;
class UFortTooltip;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTooltipManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UFortTooltip*> Tooltips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageRecieverProxy;
    
public:
    UFortTooltipManager();
};


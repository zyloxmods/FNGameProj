#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortRestedXpBoosterToken.generated.h"

UCLASS(Blueprintable)
class UFortRestedXpBoosterToken : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestedXpAmountToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresBattlePass;
    
public:
    UFortRestedXpBoosterToken(const FObjectInitializer& ObjectInitializer);
};


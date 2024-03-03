#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SpatialChallengePunchCardEntry.generated.h"

class UAthenaChallengePunchCard;

UCLASS(Blueprintable, EditInlineNew)
class USpatialChallengePunchCardEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePunchCard* PunchCard_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePunchCard* PunchCard_Bottom;
    
public:
    USpatialChallengePunchCardEntry();
};


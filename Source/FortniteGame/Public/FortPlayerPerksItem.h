#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortPlayerPerksItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerPerksItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 earned_xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 previous_level;
    
public:
    UFortPlayerPerksItem();
};


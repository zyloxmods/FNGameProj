#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortAccoladeItem.generated.h"

UCLASS(Blueprintable)
class UFortAccoladeItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 last_earned_day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 earned_count;
    
public:
    UFortAccoladeItem();
};


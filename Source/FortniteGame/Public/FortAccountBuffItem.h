#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAccountItem.h"
#include "FortAccountBuffItem.generated.h"

UCLASS(Blueprintable)
class UFortAccountBuffItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expiration_date;
    
    UFortAccountBuffItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "FortPersistableItem.h"
#include "FortProfileItem.generated.h"

UCLASS(Blueprintable)
class UFortProfileItem : public UFortPersistableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 item_seen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 favorite: 1;
    
public:
    UFortProfileItem();
    UFUNCTION(BlueprintCallable)
    void MarkItemAsSeen();
    
};


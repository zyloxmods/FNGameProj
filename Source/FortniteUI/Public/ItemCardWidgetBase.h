#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "ItemCardWidgetBase.generated.h"

class UFortGiftInfo;
class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable)
class UItemCardWidgetBase : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftInfo* LootInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* FortMultiSizeItemCard_Widget;
    
    UItemCardWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetLootInfo(UFortGiftInfo* NewLootInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootInfoSet();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EFortBrushSize.h"
#include "Components/Widget.h"
#include "FortTierIndicator.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class UFortTierIndicator : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> BrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterPipPadding;
    
    UFortTierIndicator();
    UFUNCTION(BlueprintCallable)
    void SetPreviewState(int32 TierIncrease);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(UFortItem* NewItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetInterPipPadding(float NewInterPipPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushSize(TEnumAsByte<EFortBrushSize::Type> NewBrushSize);
    
    UFUNCTION(BlueprintCallable)
    void ClearPreviewState();
    
};


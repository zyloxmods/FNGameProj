#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
#include "UObject/NoExportTypes.h"
#include "EFortBrushSize.h"
#include "FortLazyImage.generated.h"

class UFortItem;
class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortLazyImage : public UCommonLazyImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDropShadow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
public:
    UFortLazyImage();
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetFortBrushSize(TEnumAsByte<EFortBrushSize::Type> FortBrushSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromURL(const FString& CMSImageURL);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromItemInstance(const UFortItem* ItemInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromItemDefinition(const UFortItemDefinition* ItemDefinition);
    
};


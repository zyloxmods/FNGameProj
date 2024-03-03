#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "FortReactiveShopTileText.generated.h"

UCLASS(Blueprintable)
class UFortReactiveShopTileText : public UCommonTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCharacterCountBeforeScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScaleDownPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialFontSize;
    
public:
    UFortReactiveShopTileText();
private:
    UFUNCTION(BlueprintCallable)
    void SetMaxCharacterCountBeforeScaling(int32 InMaxCharacterCountBeforeScaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharacterCountBeforeScaling() const;
    
};


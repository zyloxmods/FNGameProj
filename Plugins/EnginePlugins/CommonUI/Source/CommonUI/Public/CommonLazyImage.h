#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Image.h"
#include "OnLoadGuardStateChangedDynamicDelegate.h"
#include "CommonLazyImage.generated.h"

class UMaterialInterface;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class COMMONUI_API UCommonLazyImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingBackgroundBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialTextureParamName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGuardStateChangedDynamic BP_OnLoadingStateChanged;
    
public:
    UCommonLazyImage();
    UFUNCTION(BlueprintCallable)
    void SetMaterialTextureParamName(FName TextureParamName);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromLazyTexture(const TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromLazyMaterial(const TSoftObjectPtr<UMaterialInterface>& LazyMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
};


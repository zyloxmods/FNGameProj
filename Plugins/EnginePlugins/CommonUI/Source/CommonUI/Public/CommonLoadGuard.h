#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/ContentWidget.h"
#include "OnLoadGuardStateChangedDynamicDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommonLoadGuard.generated.h"

class UCommonTextStyle;
class UObject;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class COMMONUI_API UCommonLoadGuard : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetLoaded, UObject*, Object);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> ThrobberAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ThrobberPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGuardStateChangedDynamic BP_OnLoadingStateChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SpinnerMaterialPath;
    
public:
    UCommonLoadGuard();
    UFUNCTION(BlueprintCallable)
    void SetLoadingText(const FText& InLoadingText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoading(bool bInIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const UCommonLoadGuard::FOnAssetLoaded& OnAssetLoaded);
    
};


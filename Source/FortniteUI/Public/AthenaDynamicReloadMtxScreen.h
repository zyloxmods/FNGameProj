#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "AthenaReloadMtxScreenBase.h"
#include "AthenaDynamicReloadMtxScreen.generated.h"

class UAthenaDynamicMtxOfferButton;
class UAthenaReloadMtxScreen;
class UAthenaStarterKitOfferButton;
class UAthenaStaticMtxOfferButton;
class UCommonButton;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UOverlay;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaDynamicReloadMtxScreen : public UAthenaReloadMtxScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TotalNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CurrentBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_DynamicOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaStarterKitOfferButton* Button_StarterKitOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_MtxRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_StarterKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaDynamicMtxOfferButton* Button_MtxRequiredOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaStaticMtxOfferButton* Button_MtxOtherOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MoreOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaReloadMtxScreen* StaticReloadMtxScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButton* MtxRequiredButtonToFocus;
    
public:
    UAthenaDynamicReloadMtxScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetMtxRequiredButtonToFocus(EUINavigation InNavigation) const;
    
};


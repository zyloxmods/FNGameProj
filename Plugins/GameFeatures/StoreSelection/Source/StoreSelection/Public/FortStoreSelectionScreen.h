#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "ItemData.h"
#include "FortStoreSelectionScreen.generated.h"

class IPurchaseChoiceRequesterInterface;
class UPurchaseChoiceRequesterInterface;
class UCommonButton;
class UCommonButtonGroup;
class UCommonLoadGuard;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortMtxOfferData;
class UFortRealMoneyOffer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreSelectionScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* EntryBoxButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRealMoneyOffer* StoreOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* StoreOfferLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_InitiallySelectedHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemData> StoreOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMtxOfferData> SoftDisplayAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemData ItemData[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionalLabels[2];
    
public:
    UFortStoreSelectionScreen();
};


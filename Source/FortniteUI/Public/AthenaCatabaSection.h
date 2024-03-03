#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCatabaSectionInterface.h"
#include "AthenaCatabaSection.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortCatabaScrollBox;
class UFortEventDateTimeTextBlock;
class UFortStoreFrontOfferInfo;
class UHorizontalBox;
class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCatabaSection : public UCommonActivatableWidget, public IAthenaCatabaSectionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> OfferIdToIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FIntPoint> Analytics_OfferIdToIndex2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> OffersToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_OfferEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCatabaScrollBox* ScrollBox_Offers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* Text_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CircleArrowButton_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CircleArrowButton_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Offers;
    
public:
    UAthenaCatabaSection();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedStateUpdated(bool bIsInSelectedState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float InCurrentScrollOffset);
    
    
    // Fix for true pure virtual functions not being implemented
};


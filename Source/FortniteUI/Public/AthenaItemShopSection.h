#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaItemShopSection.generated.h"

class UCommonTextBlock;
class UFortEventDateTimeTextBlock;
class UFortStoreFrontOfferWidgetBase;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* Text_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_TimeRemaining;
    
public:
    UAthenaItemShopSection();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSectionEstablished(bool bEmptySection);
    
    UFUNCTION(BlueprintCallable)
    void HandleOfferSeenInDetails(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleCarouselOfferChanged(UFortStoreFrontOfferWidgetBase* Target, const FString& OfferId);
    
};


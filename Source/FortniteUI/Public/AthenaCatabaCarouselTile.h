#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaCatabaCarouselTile.generated.h"

class UCommonTextBlock;
class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCatabaCarouselTile : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Foreground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ExternalMedia;
    
public:
    UAthenaCatabaCarouselTile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeekStateChanged(bool bIsInPeekState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutTransitionToPrevious();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutTransitionToNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeInTransitionToPrevious();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeInTransitionToNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bIsSelected);
    
};


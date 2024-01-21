#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "OnMediaOpenedDelegate.h"
#include "OnMediaPlayerEndReachedDelegate.h"
#include "OnSkipButtonClickedDelegate.h"
#include "FortActivatableVideoPanel.generated.h"

class UCommonButton;
class UFortVideoPlayerWidget;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivatableVideoPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkipButtonClicked OnSkipButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerEndReached OnMediaPlayerEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaOpened OnMediaOpened;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSkipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVideoPlayerWidget* VideoPlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ThrobberBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Throbber;
    
public:
    UFortActivatableVideoPanel();
    UFUNCTION(BlueprintCallable)
    bool StreamVideo(const FString& VideoURL);
    
    UFUNCTION(BlueprintCallable)
    void ShowThrobber();
    
    UFUNCTION(BlueprintCallable)
    bool LoadVideoByIndex(int32 VideoIndex);
    
    UFUNCTION(BlueprintCallable)
    bool LoadVideo(FName VideoID);
    
};


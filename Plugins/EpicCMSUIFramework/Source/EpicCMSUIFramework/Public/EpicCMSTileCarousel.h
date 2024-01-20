#pragma once
#include "CoreMinimal.h"
#include "Sound/SlateSound.h"
#include "Blueprint/UserWidget.h"
#include "EpicCMSTileCarousel.generated.h"

class UCommonWidgetCarousel;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EPICCMSUIFRAMEWORK_API UEpicCMSTileCarousel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PreviousButtonSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound NextButtonSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarousel* Carousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NextPageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PreviousPageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowNavigationOnlyOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputActionsForPaging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingNavigation;
    
public:
    UEpicCMSTileCarousel();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPageByIndex(const int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NavigationVisibilityChanged(bool bShowNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTilePageAdded(UWidget* TileWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginAutoScrolling();
    
    UFUNCTION(BlueprintCallable)
    void AddTilePage(UWidget* TilePageWidget);
    
};


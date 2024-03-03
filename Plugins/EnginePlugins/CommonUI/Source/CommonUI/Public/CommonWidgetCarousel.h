#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "OnCurrentPageIndexChangedDelegate.h"
#include "CommonWidgetCarousel.generated.h"

class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonWidgetCarousel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWidgetIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPageIndexChanged OnCurrentPageIndexChanged;
    
    UCommonWidgetCarousel();
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAutoScrolling();
    
    UFUNCTION(BlueprintCallable)
    void BeginAutoScrolling(float ScrollInterval);
    
};


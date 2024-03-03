#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "EFortComicViewMode.h"
#include "FortComicPanelReference.h"
#include "OnComicEventDelegate.h"
#include "OnComicHoverZoneChangedBPDelegate.h"
#include "FortComicReader.generated.h"

class UFortComicPage;

UCLASS(Blueprintable)
class UFortComicReader : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortComicPage*> Pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortComicPanelReference CurrentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortComicViewMode ViewMode;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComicEvent BP_OnPanelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComicEvent BP_OnNext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComicEvent BP_OnPrevious;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComicEvent BP_OnViewModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComicHoverZoneChangedBP BP_OnHoverZoneChanged;
    
public:
    UFortComicReader();
    UFUNCTION(BlueprintCallable)
    void ToggleViewMode();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(int32 InPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void Previous();
    
    UFUNCTION(BlueprintCallable)
    void Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortComicViewMode GetViewMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPageNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPanelsOnPage(int32 InPageNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPanelIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex() const;
    
};


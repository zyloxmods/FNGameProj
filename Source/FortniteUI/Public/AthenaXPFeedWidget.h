#pragma once
#include "CoreMinimal.h"
#include "XPUIEvent.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaXPFeedWidget.generated.h"

class UAthenaXPFeedWidgetEntry;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaXPFeedWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VertBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaXPFeedWidgetEntry> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumOfEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaXPFeedWidgetEntry*> EntryPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaXPFeedWidgetEntry*> AvailableEntries;
    
public:
    UAthenaXPFeedWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRestXP(int32 RestXpRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPUIEvent& XPEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnForwardedXPEvent(const FXPUIEvent& XPEvent);
    
};


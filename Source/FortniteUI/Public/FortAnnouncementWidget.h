#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortAnnouncementWidget.generated.h"

class AFortClientAnnouncement;

UCLASS(Blueprintable, EditInlineNew)
class UFortAnnouncementWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortClientAnnouncement* BoundAnnouncement;
    
public:
    UFortAnnouncementWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateWidgetData(AFortClientAnnouncement* Announcement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextForAction(const FName ActionName) const;
    
    UFUNCTION(BlueprintCallable)
    FName FindFirstUnboundAction(FText AnnouncementBody);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BindUpdateEvents(AFortClientAnnouncement* Announcement);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void AnnouncementStopped(AFortClientAnnouncement* Announcement);
    
};


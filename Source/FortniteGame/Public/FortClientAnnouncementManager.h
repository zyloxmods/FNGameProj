#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortClientAnnouncementQueue.h"
#include "FortClientAnnouncementManager.generated.h"

class AFortClientAnnouncement;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortClientAnnouncementManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientAnnouncements, meta=(AllowPrivateAccess=true))
    TArray<AFortClientAnnouncement*> ClientAnnouncements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortClientAnnouncement*> LocalClientAnnouncements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CancelledAnnouncements, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CancelledAnnouncements;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementQueue Channels[3];
    
public:
    AFortClientAnnouncementManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientAnnouncements(TArray<AFortClientAnnouncement*>& PreviousClientAnnouncements);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CancelledAnnouncements();
    
};


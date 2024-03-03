#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EFortAnnouncementChannel.h"
#include "EFortAnnouncementDelivery.h"
#include "FortClientEventInterface.h"
#include "OnNewClientAnnouncementOnClientDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortClientAnnouncement.generated.h"

class AFortPlayerController;
class UUserWidget;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FORTNITEGAME_API AFortClientAnnouncement : public AActor, public IFortClientEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid AnnouncementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnAllClientsStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAnnouncementChannel Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAnnouncementDelivery ClientDeliveryStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientDeliveryTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewClientAnnouncementOnClientDelegate OnUpdateAnnouncementData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewClientAnnouncementOnClientDelegate OnAnnouncementStopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerController*> RecipientControllers;
    
public:
    AFortClientAnnouncement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopClientAnnouncement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnClientAnnouncementStop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnClientAnnouncementStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 GetPriority();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelClientAnnouncement();
    
    
    // Fix for true pure virtual functions not being implemented
};


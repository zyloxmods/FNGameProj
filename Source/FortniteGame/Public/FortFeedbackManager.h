#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortFeedbackEventData.h"
#include "Templates/SubclassOf.h"
#include "FortFeedbackManager.generated.h"

class AController;
class AFortFeedbackManager;
class AFortPawn_FeedbackAnnouncer;
class UObject;

UCLASS(Blueprintable)
class AFortFeedbackManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackEventData> FeedbackEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesStWFeedbackEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackEventData> BankDefinedFeedbackEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPawn_FeedbackAnnouncer> AnnouncerPawnClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPawn_FeedbackAnnouncer* Announcer;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AController>> SuppressedControllers;
    
public:
    AFortFeedbackManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SuppressProceduralFeedback(TArray<AController*> ControllersToSuppress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortFeedbackManager* GetFeedbackManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortPawn_FeedbackAnnouncer* GetAnnouncerPawn(UObject* WorldContextObject);
    
};


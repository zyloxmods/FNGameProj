#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameStateComponent.h"
#include "FortClientEventInterface.h"
#include "Templates/SubclassOf.h"
#include "FortGameStateComponent_FrontEndFlowSTW.generated.h"

class AFortClientAnnouncement;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_FrontEndFlowSTW : public UGameStateComponent, public IFortClientEventInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortClientAnnouncement> NameHomebaseAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortClientAnnouncement> SatelliteCinematicAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> BannerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> CompositeWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OnboardingCompleteZoneStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OnboardingWatchSatelliteCineStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OnboardingNameHomebaseStatHandle;
    
public:
    UFortGameStateComponent_FrontEndFlowSTW();
    UFUNCTION(BlueprintCallable)
    void OnSatelliteAnnouncementEnded(AFortClientAnnouncement* Announcement);
    
    UFUNCTION(BlueprintCallable)
    void OnNameHomebaseAnnouncementEnded(AFortClientAnnouncement* Announcement);
    
    UFUNCTION(BlueprintCallable)
    void HandleClientEvent_HomebasePersonalized();
    
    
    // Fix for true pure virtual functions not being implemented
};


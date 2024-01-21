#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Blueprint/UserWidgetPool.h"
#include "ECancelMarkerReason.h"
#include "FortClientMarkerRequest.h"
#include "FortWorldMarkerData.h"
#include "MarkerID.h"
#include "Templates/SubclassOf.h"
#include "AthenaMarkerComponent.generated.h"

class AFortPlayerMarkerBase;
class UFortWorldMarker;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UAthenaMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MarkerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerMarkerBase> MarkerActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldMarker*> MarkerStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplayMarkers, meta=(AllowPrivateAccess=true))
    TArray<FFortWorldMarkerData> ReplayMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocalPlaceableMarkersPerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RemotePlayableMarkerSoundsPerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldMarker* PendingCancelMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldMarker* LastHoveredMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerMarkerBase*> MarkerActorPool;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    //FUserWidgetPool MarkerWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAimingDownSights;
    
public:
    UAthenaMarkerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerWidgetClass(TSubclassOf<UUserWidget> InMarkerClass);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerActorClass(TSubclassOf<AFortPlayerMarkerBase> InMarkerActorClass);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveMapMarker(FMarkerID MarkerID, ECancelMarkerReason CancelReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddMapMarker(FFortClientMarkerRequest MarkerRequest);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimelineScrubbed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayMarkers();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelMarker(FMarkerID MarkerID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddMarker(FFortWorldMarkerData MarkerData);
    
};


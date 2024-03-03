#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Blueprint/UserWidgetPool.h"
#include "ECancelMarkerReason.h"
#include "FortClientMarkerRequest.h"
#include "FortWorldMarkerContainer.h"
#include "MarkerID.h"
#include "Templates/SubclassOf.h"
#include "AthenaMarkerComponent.generated.h"

class AActor;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortWorldMarkerContainer MarkerStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocalPlaceableMarkersPerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RemotePlayableMarkerSoundsPerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RemotePlayableMarkerSoundsPerPlayerIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldMarker* PendingCancelMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldMarker* LastHoveredMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerMarkerBase*> MarkerActorPool;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool MarkerWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAimingDownSights;
    
public:
    UAthenaMarkerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UnmarkActorOnClient(FMarkerID MarkerID);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerWidgetClass(TSubclassOf<UUserWidget> InMarkerClass);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerActorClass(TSubclassOf<AFortPlayerMarkerBase> InMarkerActorClass);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerRemoveMapMarker(FMarkerID MarkerID, ECancelMarkerReason CancelReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddMapMarker(FFortClientMarkerRequest MarkerRequest);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimelineScrubbed();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FMarkerID MarkActorOnClient(AActor* ActorToBeMarked, const bool bIncludeSquad, const bool bUseHoveredMarkerDetail);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UFortWorldMarker* FindMarkerByID(FMarkerID MarkerID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllMarkers();
    
};


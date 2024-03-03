#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ShapeComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortCurieCableSocket.h"
#include "FortCurieCableSocketIdentifier.h"
#include "FortCurieCableSocketComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieCableSocketComponent : public UShapeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurieCableSignalReceived, const FFortCurieCableSocketIdentifier&, SocketIdentifier, const FGameplayTag&, ElementTag, float, Magnitude);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurieCableSignalReceived OnCurieCableSignalReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieCableSocket> CableSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableSocketRadius;
    
public:
    UFortCurieCableSocketComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendSignal(FFortCurieCableSocketIdentifier SourceSocketIdentifier, FGameplayTag ElementTag, float Magnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsReceivedElementSignalActive(FFortCurieCableSocketIdentifier SocketIdentifier, FGameplayTag ElementTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCableSocketConnected(FFortCurieCableSocketIdentifier SocketIdentifier) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetReceivedElementSignals(FFortCurieCableSocketIdentifier SourceSocketIdentifier) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetReceivedElementSignalMagnitude(FFortCurieCableSocketIdentifier SocketIdentifier, FGameplayTag ElementTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetOngoingReceivedElementSignals(FFortCurieCableSocketIdentifier SourceSocketIdentifier) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetCableSocketWorldLocation(const FFortCurieCableSocketIdentifier& SocketIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCableSocketIdentifiers(TArray<FFortCurieCableSocketIdentifier>& SocketIdentifiers) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetCableSocketConnection(FFortCurieCableSocketIdentifier SourceSocketIdentifier, AActor*& ConnectedActor, FFortCurieCableSocketIdentifier& ConnectedSocketIdentifier) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Disconnect(FFortCurieCableSocketIdentifier SourceSocketIdentifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Connect(FFortCurieCableSocketIdentifier SourceSocketIdentifier, AActor* DestinationActor, FFortCurieCableSocketIdentifier DestinationSocketIdentifier);
    
};


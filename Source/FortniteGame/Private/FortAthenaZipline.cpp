#include "FortAthenaZipline.h"
#include "Net/UnrealNetwork.h"

bool AFortAthenaZipline::UseInteractToEnterZipline() const {
    return false;
}

void AFortAthenaZipline::Initialize(const FVector& NewStartPosition, const FVector& NewEndPosition) {
}

void AFortAthenaZipline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaZipline, StartPosition);
    DOREPLIFETIME(AFortAthenaZipline, EndPosition);
    DOREPLIFETIME(AFortAthenaZipline, bInitialized);
}

AFortAthenaZipline::AFortAthenaZipline() {
    bInitialized = false;
}


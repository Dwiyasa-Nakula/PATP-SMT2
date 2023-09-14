#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[20];
    int saldo;
} User user[100];

int jumlah_user;

int user_id(int id) {
    for (int i = 0; i < jumlah_user; i++) {
        if (user[i].id == id) {
            return i;
        }
    }
    return -1;
}

void register_user(char *name, int saldo_awal) {
    User user;
    user.id = jumlah_user + 1;
    strcpy(user.name, name);
    user.saldo = saldo_awal;
    user[jumlah_user] = user;
    jumlah_user++;
    printf("register berhasil, id anda adalah %d dengan nama %s\n", user.id, user.name);
}

void topup(int id, int jumlah) {
    int index = user_id(id);
    if (index != -1) {
        user[index].saldo += jumlah;
        printf("topup %d berhasil dilakukan ke %s\n", jumlah, user[index].name);
    }
}

void pay(int id, int jumlah) {
    int index = user_id(id);
    if (index != -1) {
        if (user[index].saldo >= jumlah) {
            user[index].saldo -= jumlah;
            printf("pembayaran berhasil dilakukan oleh %s\n", user[index].name);
        } else {
            printf("pembayaran tidak berhasil oleh %s\n", user[index].name);
        }
    }
}

void transfer(int pengirim_id, int penerima_id, int jumlah) {
    int pengirim_index = user_id(pengirim_id);
    int penerima_index = user_id(penerima_id);
    if (pengirim_index != -1 && penerima_index != -1) {
        if (user[pengirim_index].saldo >= jumlah) {
            user[pengirim_index].saldo -= jumlah;
            user[penerima_index].saldo += jumlah;
            printf("transfer berhasil dari %s ke %s sebanyak %d\n", user[pengirim_index].name, user[penerima_index].name, jumlah);
        } else {
            printf("transfer gagal, saldo tidak mencukupi\n");
        }
    } else if (penerima_index == -1) {
        printf("transfer gagal, %d belum terdaftar\n", penerima_id);
    }
}

void info(int id) {
    int index = user_id(id);
    if (index != -1) {
        printf("saldo %s adalah %d\n", user[index].name, user[index].saldo);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char command[10];
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "register") == 0) {
            char name[20];
            int saldo_awal;
            scanf("%s %d", name, &saldo_awal);
            register_user(name, saldo_awal);
        } else if (strcmp(command, "topup") == 0) {
            int id, jumlah;
            scanf("%d %d", &id, &jumlah);
            topup(id, jumlah);
        } else if (strcmp(command, "pay") == 0) {
            int id, jumlah;
            scanf("%d %d", &id, &jumlah);
            pay(id, jumlah);
        } else if (strcmp(command, "transfer") == 0) {
            int pengirim_id, penerima_id, jumlah;
            scanf("%d %d %d", &pengirim_id, &penerima_id, &jumlah);
            transfer(pengirim_id, penerima_id, jumlah);
        } else if (strcmp(command, "info") == 0) {
            int id;
            scanf("%d", &id);
            info(id);
        }
    }

    return 0;
}
